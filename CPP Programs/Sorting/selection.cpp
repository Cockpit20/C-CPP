#include<iostream>
using namespace std;

void swap(int arr[],int a,int b)
{
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}

int get_maxIndex(int arr[],int size)
{
    int max=arr[0];
    int maxIndex=0;
    for (int i = 0; i <= size; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            maxIndex=i;
        }
    }
    return maxIndex;
}

void selectionSort(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        int lastIndex=size-i;
        int maxIndex=get_maxIndex(arr,lastIndex);
        swap(arr,lastIndex,maxIndex);
    }
    return;
}

int main()
{
    int arr[]={43,21,55,12,34};

    selectionSort(arr,5);

    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
}