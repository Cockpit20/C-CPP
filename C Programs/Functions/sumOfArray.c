#include <stdio.h>
int findSum(int arr[],int n);
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
    int sum=findSum(arr,n);
    printf("Sum = %d",sum);

}
int findSum(int arr[],int n)
{
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    return sum;
}