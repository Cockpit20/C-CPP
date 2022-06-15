#include<iostream>
using namespace std;

void swap(int arr[],int a,int b)
{
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}

void bubbleSort(int arr[],int size)
{
    for(int i=0;i<=3;i++)
    {
        for(int j=1;j<=i+1;j++)
        {
            if(arr[j]<arr[j-1])
            swap(arr,j,j-1);
        }
    }
    return;
}

int main()
{
    int arr[]={3,1,5,2,4};

    bubbleSort(arr,5);

    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}