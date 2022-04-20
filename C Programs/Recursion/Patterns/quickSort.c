#include<stdio.h>
void quickSort(int arr[],int low,int high);
void swap(int arr[],int a,int b);
int main()
{
    int arr[]={21,5,32,29,4,59,50};
    quickSort(arr,0,6);
    for (int i = 0; i < 7; i++)
    {
        printf("%d ",arr[i]);
    }
    
}
void quickSort(int arr[],int low,int high)
{
    if(low>=high)
    return;
    int start=low;
    int end=high;
    int mid=start+(end-start)/2;
    int pivot=arr[mid];
    while(start<=end){
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
    quickSort(arr,low,end);
    quickSort(arr,start,high);
}
void swap(int arr[],int a,int b)
{
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}