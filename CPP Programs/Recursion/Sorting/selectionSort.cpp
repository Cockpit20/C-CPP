#include<iostream>
using namespace std;

void swap(int arr[],int a,int b)
{
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}

void selectionSort(int row,int col,int arr[],int max)
{
    if(row==0)
    return;
    if(col<row)
    {
        if(arr[col]>arr[max])
        selectionSort(row,col+1,arr,col);
        else
        selectionSort(row,col+1,arr,max);
    }
    else
    {
        swap(arr,max,row-1);
        selectionSort(row-1,0,arr,0);
    }
}


int main()
{
    int arr[]={5,4,3,2,1};
    selectionSort(5,0,arr,0);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}