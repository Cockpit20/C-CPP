#include<stdio.h>
int main()
{
    int n;
    printf("Enter the  number of rows:");
    scanf("%d",&n);
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}