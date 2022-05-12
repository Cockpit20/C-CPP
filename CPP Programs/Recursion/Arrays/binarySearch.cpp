#include<iostream>
using namespace std;

int binarySearch(int arr[],int target,int start,int end)
{
    if(start>end)
    return -1;
    int mid=start+(end-start)/2;
    if(arr[mid]==target)
    return mid;
    if(target>arr[mid])
    return binarySearch(arr,target,mid+1,end);
    else
    return binarySearch(arr,target,start,mid-1);

}
int main()
{
    int arr[]={1,2,3,4,5};
    int target=2;

    int index=binarySearch(arr,target,0,4);
    if(index==-1)
    cout<<target<<" not found";
    else
    cout<<target<<" found at index "<<index;
}