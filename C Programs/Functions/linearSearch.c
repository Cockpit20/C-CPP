#include <stdio.h>
int linearSearch(int arr[],int n,int target);
int main()
{
    int n,target;
    int arr[10];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the target: ");
    scanf("%d",&target);
    int index=linearSearch(arr,n,target);
    if(index!=-1)
    printf("%d is found at index %d",target,index);
    else
    printf("%d is not found",target);
}
int linearSearch(int arr[],int size,int target)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==target)
        return i;
    }
    return -1;
    
}