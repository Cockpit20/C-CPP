#include<stdio.h>
void mergeSort(int arr[],int start,int end);
void merge(int arr[],int start,int mid,int end);
int main()
{
    int arr[]={40,12,32,4,25,30,29,134,0,1};
    mergeSort(arr,0,10);
    for (int i = 0; i < 9; i++)
    {
        printf("%d ",arr[i]);
    } 
}
void mergeSort(int arr[],int start,int end)
{
    if(end-start==1)
    return;
    int mid=(start+end)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid,end);
    merge(arr,start,mid,end);
}
void merge(int arr[],int start,int mid,int end)
{
    int mix[end-start];
    int i=start;
    int j=mid;
    int k=0;
    while(i<mid && j<end){
        if(arr[i]<arr[j]){
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
        i++;k++;
    }
    while(j<end){
        mix[k]=arr[j];
        j++;
        k++;
    }
    for (int l = 0; l < k; l++)
    {
        arr[start+l]=mix[l];
    }  
}