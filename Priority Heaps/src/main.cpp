#include <iostream>
#include <string.h>

struct Heap
{
	int* array;
	int count; // Number of elements in heap
	int capacity; // Size of heap
	int heap_type; // Min Heap(0)/Max Heap(1)
};

void printHeap(struct Heap *heap);

struct Heap* createHeap(int capacity, int heap_type)
{
	struct Heap* heapMemory = (struct Heap*) malloc(sizeof(struct Heap));
	if(heapMemory == nullptr)
	{
		std::cout << "Memory error" << std::endl;
		return nullptr;
	}

	memset(heapMemory, 0, sizeof(struct Heap));

	heapMemory->heap_type = heap_type;
	heapMemory->count = 0;
	heapMemory->capacity = capacity;
	heapMemory->array = (int*)malloc(sizeof(int) * capacity);
	memset(heapMemory->array, 0, sizeof(int) * capacity);

	return heapMemory;
}

int parent(struct  Heap* heap, int i)
{
	if (i < 0 || i > (heap->count - 1))
		return -1;
	return ((i - 1) /2);
}

int LeftChild(struct Heap *heap, int i)
{
	int left = ((2 * i) + 1);
	if (i < 0 || left > (heap->count - 1))
		return -1;

	return left;
}

int RightChild(struct Heap *heap, int i)
{
	int right = ((2 * i) + 2);
	if (i < 0 || right > (heap->count - 1))
		return -1;

	return right;
}

int GetMaximum(struct Heap *heap)
{
	if ( (heap == nullptr) || (heap->array == nullptr) || (heap->count <= 0))
		return -1;

	return heap->array[0];
}

void percolateDown(struct Heap* heap, int index)
{
	if (index >= heap->count)
	{
		std::cout << "Invalid index : " << index << std::endl;
		return;
	}

	int max = index;
	int leftIndex = LeftChild(heap, index);
	int rightIndex = RightChild(heap, index);

	if ( (leftIndex != -1) && (heap->array[index] <= heap->array[leftIndex]))
	{
		max = leftIndex;
	}

	if ((rightIndex != -1) && (heap->array[max] < heap->array[rightIndex]))
	{
		max = rightIndex;
	}

	if (max != index)
	{
		int temp = heap->array[index];
		heap->array[index] = heap->array[max];
		heap->array[max] = temp;
		percolateDown(heap, max);
	}
}

int deleteMax(struct  Heap * heap)
{
	if (heap->count == 0)
		return -1;

	int *container = heap->array;

	int maxElement = heap->array[0];

	heap->array[0] = heap->array[heap->count - 1];
	heap->count = heap->count - 1;

	percolateDown(heap, 0);
	printHeap(heap);

	return maxElement;
}

void percolateUp(struct Heap* heap, int index)
{
	if(index >= heap->count)
	{
		std::cout << "Invalid index : " << index << std::endl;
		return;
	}

	int parentIndex = parent(heap, index);

	if(parentIndex  == -1)
	{
		std::cout << "Invalid parent index : " << parentIndex << std::endl;
		return;
	}

	if(heap->array[index] > heap->array[parentIndex])
	{
		int temp = heap->array[index];
		heap->array[index] = heap->array[parentIndex];
		heap->array[parentIndex] = temp;

		percolateUp(heap, parentIndex);
	}
}

void resizeHeap(struct Heap* heap)
{
	int* arrayOld = heap->array;
	int capacityOld = heap->capacity;

	heap->array = (int*) malloc(sizeof(int) * heap->capacity * 2);
	if (heap->array == nullptr)
	{
		std::cout << "Malloc error " << std::endl;
		return;
	}

	heap->capacity = heap->capacity * 2;
	memcpy(heap->array,arrayOld, sizeof(int) * capacityOld);

	free(arrayOld);
}

void printHeap(struct Heap *heap)
{
	for(int index = 0; index < heap->count; index++)
	{
		std::cout << heap->array[index] << " ";
	}

	std::cout << std::endl;
}


void BuildHeapFromArray(struct Heap *heap, int *A, int n)
{
	if(heap->count == heap->capacity)
	{
		resizeHeap(heap);
	}

	memcpy(heap->array, A, sizeof(int) * n);
	heap->count = n;
	heap->heap_type = 1;

	for(int index = (heap->count -1 )/2; index >= 0 ;index--)
	{
		percolateDown(heap, index);
	}
}

void HeapSort(int *A, int n)
{
	int capacity = 32;
	int heap_type = 1;
	struct Heap *heapContainer = createHeap(capacity, heap_type);
	BuildHeapFromArray(heapContainer, A, n);
	int oldHeapCount = heapContainer->count;

	for(int index = heapContainer->count - 1; index > 0 ;index--)
	{
		int temp = heapContainer->array[0];
		heapContainer->array[0] = heapContainer->array[heapContainer->count - 1];
		heapContainer->array[heapContainer->count - 1] = temp;
		heapContainer->count = heapContainer->count - 1;
		percolateDown(heapContainer, 0);
	}

	heapContainer->count = oldHeapCount;

	printHeap(heapContainer);
	if(heapContainer->array != nullptr)
	{
		free(heapContainer->array);
	}

	heapContainer->array = nullptr;

	if (heapContainer != nullptr)
	{
		free(heapContainer);
	}
	heapContainer = nullptr;
}

int main(int argc, char *argv[])
{
	int capacity = 11;
	int heap_type = 1;

	struct Heap *heapContainer = createHeap(capacity, heap_type);
	heapContainer->count = 11;

	heapContainer->array[0] = 31;
	heapContainer->array[1] = 1;
	heapContainer->array[2] = 21;
	heapContainer->array[3] = 9;
	heapContainer->array[4] = 10;
	heapContainer->array[5] = 12;
	heapContainer->array[6] = 18;
	heapContainer->array[7] = 3;
	heapContainer->array[8] = 2;
	heapContainer->array[9] = 8;
	heapContainer->array[10] = 7;

	percolateDown(heapContainer, 1);
	printHeap(heapContainer);

	deleteMax(heapContainer);

	heapContainer->count = heapContainer->count + 1;
	heapContainer->array[heapContainer->count - 1] = 90;
	if (heapContainer->capacity == heapContainer->count)
	{
		resizeHeap(heapContainer);
	}
	percolateUp(heapContainer, heapContainer->count - 1);
	printHeap(heapContainer);

	if(heapContainer->array != nullptr)
	{
		free(heapContainer->array);
	}

	heapContainer->array = nullptr;

	if (heapContainer != nullptr)
	{
		free(heapContainer);
	}

	heapContainer = nullptr;

	capacity = 64;
	heapContainer = createHeap(capacity, heap_type);
	int A[] = {23, 45, 65, 21, 12, 98, 23, 56, 101, 1, 3, 5, 6, 7};
	BuildHeapFromArray(heapContainer, A, sizeof(A)/ sizeof(int));
	printHeap(heapContainer);

	if(heapContainer->array != nullptr)
	{
		free(heapContainer->array);
	}

	heapContainer->array = nullptr;

	if (heapContainer != nullptr)
	{
		free(heapContainer);
	}
	heapContainer = nullptr;

	int Arr[] = {23, 45, 65, 21, 12, 98, 23, 56, 101, 1, 3, 5, 6, 7};
	HeapSort(Arr, sizeof(Arr)/ sizeof(int));
}