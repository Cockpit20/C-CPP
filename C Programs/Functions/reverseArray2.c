#include <stdio.h>
void reverse(int arr[],int size,int start,int end);
void swap(int arr[],int a,int b);
int main()
{
    int n;
    int arr[10];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int start=0;
    int end=n-1;
    reverse(arr,n,start,end);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
void reverse(int arr[],int size,int start,int end)
{
    if(size<=0)
    {
        return;
    }
    swap(arr,start,end);
    reverse(arr,size-2,start+1,end-1);
}
void swap(int arr[],int a,int b)
{
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}