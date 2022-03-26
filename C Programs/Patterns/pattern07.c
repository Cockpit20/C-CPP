#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for (int i=1;i<=2*n-1;i++)
    {
        int space=i<=n?n-i:i-n;
        for (int j=1;j<=space;j++)
        {
            printf("  ");
        }
        int c=i<=n?i:2*n-i;
        for (int j=c;j>=1;j--)
        {
            printf("%d ",j);
        }
        for (int j=2;j<=c;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}