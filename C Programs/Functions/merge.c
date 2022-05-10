#include <stdio.h>
void merge(int arr1[],int m,int arr2[],int n);
int main()
{
    int m,n;
    int arr1[10],arr2[10];
    printf("Enter the size of 1st array: ");
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }
    printf("Enter the size of 2nd array: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }
    merge(arr1,m,arr2,n);
}
void merge(int arr1[],int m,int arr2[],int n)
{
    int ans[m+n];
    for (int i = 0; i < m; i++)
    {
        ans[i]=arr1[i];
    }
    for (int i = m; i < m+n; i++)
    {
        ans[i]=arr2[i-m];
    }
    
    for (int i = 0; i < m+n; i++)
    {
        printf("%d ",ans[i]);
    }
}