#include <iostream>
using namespace std;

void swap(int arr[],int a,int b)
{
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
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
        while(arr[start]<pivot)
        start++;
        while(arr[end]>pivot)
        end--;
        if(start<=end){
            swap(arr,start,end);
            start++;
            end--;
        }
    }

    quickSort(arr,start,high);
    quickSort(arr,low,end);

}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int size = 5;
    quickSort(arr, 0, 4);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}