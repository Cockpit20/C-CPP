#include <iostream>
using namespace std;

void swap(int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void quickSort(int arr[], int low, int high)
{
    if (low >= high)
        return;
    int start = low;
    int end = high;
    int mid = (start + end) / 2;
    int pivot = arr[mid];
    while (start <= end)
    {
        while (arr[start] < pivot)
            start++;
        while (arr[end] > pivot)
            end--;
        if (start<=end)
        {
            swap(arr, start, end);
            start++;
            end--;
        }
    }
    quickSort(arr, low, end);
    quickSort(arr, start, high);
    
}

int main()
{
    int arr[] = {45,10,32,27,39};
    quickSort(arr, 0, 4);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}