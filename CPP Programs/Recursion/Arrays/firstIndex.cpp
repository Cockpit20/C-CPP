#include <iostream>
using namespace std;

int firstIndex(int arr[], int size, int target)
{
    if (size == 0)
        return -1;
    if (arr[0] == target)
        return 0;
    int ans=firstIndex(arr + 1, size - 1, target);
    if(ans==-1)
    return -1;
    else
    return 1+ans;
}

int main()
{
    int arr[] = {6, 6, 6, 5, 6};
    int size = 5;
    int target = 8;
    cout << firstIndex(arr, size, target);
}