#include<iostream>
using namespace std;


void merge(int arr[],int start,int mid,int end)
{
    int i=start;
    int j=mid;
    int k=0;
    int mix[end-start];
    while(i<mid && j<end)
    {
        if(arr[i]<arr[j])
        {
            mix[k]=arr[i];
            i++;
        }else{
            mix[k]=arr[j];
            j++;
        }
        k++;
    }
    while(i<mid){
        mix[k]=arr[i];
        i++; k++;
    }
    while(j<mid){
        mix[k]=arr[j];
        j++;k++;
    }
    for (int l = start; l < end; l++)
    {
        arr[l]=mix[l-start];
    }
    
}

void mergeSort(int arr[],int start,int end)
{
    if(end-start==1)
    return;

    int mid=start+(end-start)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid,end);

    merge(arr,start,mid,end);
}



int main()
{
    int arr[]={5,4,3,2,1};
    int size=5;
    mergeSort(arr,0,5);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}