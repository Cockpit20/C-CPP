#include <stdio.h>
void reverse(int arr[],int n);
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
    reverse(arr,n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
void reverse(int arr[],int size)
{
    for (int i = 0; i < size/2; i++)
    {
        int temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }
    
}