#include<stdio.h>
void quickSort(int arr[],int low,int high);
void swap(int arr[],int a,int b);
int main()
{
    int arr[]={51,17,12,24,4,8,23,40};
    quickSort(arr,0,7);
    for (int i = 0; i < 8; i++)
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
    int mid=(start+end)/2;
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