#include<stdio.h>
int binarySearch(int arr[],int target,int start,int end);
int main()
{
    int arr[]={23,34,45,65,76};
    int target=23;
    int start=0;
    int end=4;
    int index=binarySearch(arr,target,start,end);
    if(index==-1)
    printf("%d is not found in the array",target);
    else
    printf("%d is found in the array at index %d",target,index);
}
int binarySearch(int arr[],int target,int start,int end)
{
    if(start>end)
    return -1;
    int mid=start+(end-start)/2;
    if(arr[mid]==target)
    return mid;
    if(target<arr[mid])
    return binarySearch(arr,target,start,mid-1);
    else
    return binarySearch(arr,target,mid+1,end);
}