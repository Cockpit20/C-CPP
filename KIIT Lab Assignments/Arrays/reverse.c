#include<stdio.h>
int main()
{
    int n[10];
    for (int i=0;i<10;i++)
    {
        printf("Enter number %d:",i+1);
        scanf("%d",&n[i]);
    }
    printf("Array in reverse order is:\n");
    for (int i=9;i>=0;i--)
    {
        printf("%d ",n[i]);
    }
}