#include<stdio.h>
int n;
int arr[100];
void input();
void display(int arr[],int n);
int main()
{
    input();
    display(arr,n);
}
void input()
{
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    
}
void display(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}