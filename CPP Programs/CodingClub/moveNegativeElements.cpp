#include<iostream>
using namespace std;

void swap(int arr[],int a,int b)
{
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}

void moveNegativeElements(int arr[],int size)
{
    int low=0;
    int high=size-1;
    while(low<=high)
    {
        if(arr[low]<0 && arr[high]<0)
        low++;
        if(arr[low]>0 && arr[high]<0)
        {
            swap(arr,low,high);
            low++;
            high--;
        }
        if(arr[low]>0 && arr[high]>0)
        high--;
        else
        {
            low++;
            high--;
        }
    }
    return;
}

int main()
{
    int arr[]={2,-9,10,12,5,-2,10,-4};
    
    moveNegativeElements(arr,8);

    for (int i = 0; i < 8; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}