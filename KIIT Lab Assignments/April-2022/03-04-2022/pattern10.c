#include<stdio.h>
int main()
{
    int n;
    printf("Enter the  number of rows:");
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i++)
    {
        int c=i<=n?i:2*n-i;
        for(int j=1;j<=c;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}