#include<stdio.h>
void sort(int arr[],int n);
void swap(int arr[],int a,int b);
int main()
{
    int arr[100];
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);

    }
    sort(arr,n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
}
void sort(int arr[],int n)
{
    for (int i = 0; i <= n-2; i++)
    {
        for (int j = 1; j <= n-i-1; j++)
        {
            if(arr[j]<arr[j-1])
            swap(arr,j,j-1);
        }
        
    }
    
}
void swap(int arr[],int a,int b)
{
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}