#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for (int i=1;i<=2*n;i++)
    {
        int c=i<=n?n-i+1:i-n;
        for (int j=1;j<=c;j++)
        {
            printf("*");
        }
        int space=i<=n?2*i-2:4*n-2*i;
        for (int j=1;j<=space;j++)
        {
            printf(" ");
        }
        for (int j=1;j<=c;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}