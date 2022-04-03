#include<stdio.h>
int main()
{
    int n;
    printf("Enter the  number of rows:");
    scanf("%d",&n);
    for(int i=65;i<=65+n-1;i++)
    {
        for(int j=1;j<=65+n-1-i;j++)
        {
            printf(" ");
        }
        for(int j=65;j<=i;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
}