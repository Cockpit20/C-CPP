#include<iostream>
using namespace std;

int binarySearch(int arr[],int target,int size)
{
    int start=0;
    int end=size-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(target==arr[mid])
        return mid;
        if(target>arr[mid])
        start=mid+1;
        else
        end=mid-1;
    }
    return -1;
}

int main()
{
    int arr[]={8,14,32,51,209};
    int target=69;

    int index=binarySearch(arr,target,5);
    if(index==-1)
    cout<<"Not Found";
    else
    cout<<"Fount at index: "<<index;
}