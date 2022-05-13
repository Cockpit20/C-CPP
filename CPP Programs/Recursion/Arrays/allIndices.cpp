#include <iostream>
using namespace std;

int allIndices(int arr[], int size, int target)
{
    // COUNT (ONLY)
    if(size==0)
        return 0;
    if(arr[size-1]==target)
    return 1+allIndices(arr,size-1,target);
    else
    return allIndices(arr,size-1,target);
}

int main()
{
    int arr[] = {4,5,7,4,4};
    int size = 5;
    int target = 4;
    cout << allIndices(arr, size, target);
}