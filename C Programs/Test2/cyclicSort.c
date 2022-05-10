#include<stdio.h>
void cyclicSort(int arr[],int length);
void swap(int arr[],int a,int b);
int main()
{
    int arr[]={6,2,5,3,1,4};
    int length=6;
    
    cyclicSort(arr,length);
    for (int i = 0; i < length; i++)
    {
        printf("%d ",arr[i]);
    }
    

}
void cyclicSort(int arr[],int length)
{
    int i=0;
    while(i<length)
    {
        if(arr[i]!=i+1)
        swap(arr,i,arr[i]-1);
        else 
        i++;
    }
    
}
void swap(int arr[],int a,int b)
{
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}