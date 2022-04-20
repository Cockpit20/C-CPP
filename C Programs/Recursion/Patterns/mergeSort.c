#include<stdio.h>
void mergeSort(int arr[],int start,int end);
void merge(int arr[],int start,int mid,int end);
int main()
{
    int arr[]={19,7,29,2,18,4,23,11,1};
    mergeSort(arr,0,9);
    for (int i = 0; i < 9; i++)
    {
        printf("%d ",arr[i]);
    }
    
}
void mergeSort(int arr[],int start,int end)
{
    //BASE_CONDITION
    if(end-start==1) 
    return;
    int mid=(start+end)/2; 
    //MERGE_SORT THE LEFT SIDE
    mergeSort(arr,0,mid); 
    //MERGE_SORT THE RIGHT SIDE
    mergeSort(arr,mid,end); 
    //MERGE BOTH THE ARRAYS WHEN THE FUNCTION IS CALLED
    merge(arr,start,mid,end);
}
void merge(int arr[],int start,int mid,int end)
{
    //TWO POINTER METHOD

    int mix[end-start];
    int i=start;
    int j=mid;
    int k=0;
    while(i<mid && j<end)
    {
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
        i++;
        k++;
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