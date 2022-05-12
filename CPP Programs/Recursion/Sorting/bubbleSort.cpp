#include<iostream>
using namespace std;

void swap(int arr[],int a,int b)
{
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}

void bubbleSort(int row,int col,int arr[])
{
    if(row==0)
    return;
    if(col<row)
    {
        if(arr[col]>arr[col+1])
        swap(arr,col,col+1);
        bubbleSort(row,col+1,arr);
    }
    else
    {
        bubbleSort(row-1,0,arr);
    }
}


int main()
{
    int arr[]={5,4,3,2,1};
    bubbleSort(4,0,arr);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}