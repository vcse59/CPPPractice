#include <iostream>

using namespace std;

void maxSumKArray(int *num, int arrLength, int k)
{
    cout << arrLength << endl;
    int start = -1;
    int windowSize = k;
    int end = k - 1;
    int *startIndex = new int[(arrLength - k) + 1];
    int *endIndex = new int[(arrLength - k) + 1];
    int *maxSum = new int[(arrLength - k) + 1];
    int sum = 0;

    int count = 0;
    while(count < windowSize)
    {
        sum = sum + num[count];
        count++;
    }

    maxSum[0] = sum;
    count = 1;
    while (windowSize < arrLength)
    {
        start++;
        end++;

        sum = sum - (num[start]) + (num[end]);
        maxSum[count] = sum;
        startIndex[count] = start;
        endIndex[count] = end;

        windowSize++;
        count++;
    }

    count = 0;
    int max = 0;
    int startVal = -1;
    int endVal = -1;
    while (count < ((arrLength - k) + 1))
    {
        if (max < maxSum[count])
        {
            max = maxSum[count];
            startVal = startIndex[count];
            endVal = endIndex[count];
        }
        cout << "Max value : " << maxSum[count] << endl;
        count++;
    }

    cout << "Sum : " << max << " Start : " << startVal + 1 << " end : " << endVal << endl; 

    delete []maxSum;
    delete []startIndex;
    delete []endIndex;
}

int main(int argv, char* argc[])
{

    int num[] {1, 2, 4, 6, 7, 8, 10};
    int length = sizeof(num)/sizeof(int);
    int k = 3;

    for(int i = 0; i < length; i++)
    {
        cout << num[i] << " ";
    }

    cout << endl;

    int index1 = -1;
    int index2 = -1;
    maxSumKArray(num, length, k);
    return 0;
}
