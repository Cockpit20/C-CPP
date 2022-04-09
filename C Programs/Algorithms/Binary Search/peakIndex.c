#include<stdio.h>
int peakIndex(int arr[]);
int main()
{
    int arr[]={24,45,67,75,76,89,153,12};
    int pI=peakIndex(arr);
    printf("Peak index in the array is %d",pI);
}
int peakIndex(int arr[])
{
    int start=0;
    int end=7;
    while(start<=end)
    {
        int mid = start + (end - start) / 2;
        if(arr[mid]>arr[mid+1])
        end=mid-1;
        if(arr[mid]<arr[mid+1])
        start=mid+1;
    }
    return start;
}