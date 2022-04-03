#include<stdio.h>
int main()
{
    int n;
    printf("Enter the  number of rows:");
    scanf("%d",&n);
    for(int i=65;i<=65+n-1;i++)
    {
        for(int j=65;j<=130+n-i-1;j++)
        {
            printf("%c",j);
        }
        for(int j=65;j<=i-1;j++)
        {
            printf(" ");
        }
        for(int j=65;j<=i-1;j++)
        {
            printf(" ");
        }
        for(int j=130+n-i-1;j>=65;j--)
        {
            printf("%c",j);
        }
        printf("\n");
    }
}