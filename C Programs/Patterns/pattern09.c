#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for (int i=1;i<=2*n-1;i++)
    {
        int c=i<=n?i:2*n-i;
        for (int j=1;j<=c;j++)
        {
            printf("*");
        }
        int space=i<=n?2*(n-i):2*(i-n);
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