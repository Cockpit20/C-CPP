#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for (int i=1;i<=2*n;i++)
    {
        int space=i<=n?i-1:2*n-i;
        for (int j=1;j<=space;j++)
        {
            printf(" ");
        }
        int c=i<=n?n-i+1:i-n;
        for (int j=1;j<=c;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}