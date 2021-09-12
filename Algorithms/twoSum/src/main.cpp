#include <iostream>

using namespace std;

void twoSum(int *num, int arrLength, int& index1, int& index2, int target)
{
    cout << arrLength << endl;
    index1 = 0;
    index2 = arrLength - 1;

    while(index1 < index2)
    {
        if ( (num[index1] + num[index2]) < target)
        {
            index1++;
        }
        else if ( (num[index1] + num[index2]) > target)
        {
            index2--;
        }
        else
        {
            cout << "Indexes are " << (index1 + 1) << " " << (index2 + 1) << endl;
            break;
        }
    }

}

int main(int argv, char* argc[])
{

    int num[] {1, 2, 4, 6, 7, 8, 10};
    int length = sizeof(num)/sizeof(int);
    int target = 15;

    for(int i = 0; i < length; i++)
    {
        cout << num[i] << " ";
    }

    cout << endl;

    int index1 = -1;
    int index2 = -1;
    twoSum(num, length, index1, index2, target);
    return 0;
}
