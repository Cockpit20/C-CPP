#include <iostream>
using namespace std;

int lastIndex(int arr[], int size, int target)
{
    if (size == 0)
        return -1;
    if (arr[size-1] == target)
        return size-1;
    return lastIndex(arr , size - 1, target);
    
}

int main()
{
    int arr[] = {6, 6, 6, 5, 8};
    int size = 5;
    int target = 6;
    cout << lastIndex(arr, size, target);
}