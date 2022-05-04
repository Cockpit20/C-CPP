#include<stdio.h>
int largest(int *arr);
int main()
{
    int arr[20];
    for (int i = 0; i < 20; i++)
    {
        printf("Enter number %d:",i+1);
        scanf("%d",&arr[i]);
    }
    int ans=largest(arr);
    printf("The largest is %d",ans);
}
int largest(int *arr)
{
    int max=*arr;
    for (int i = 0; i < 20; i++)
    {
        if(*(arr+i)>max)
        max=*(arr+i);
    }
    return max;
}