#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int limit='A'+n-1;
    for (int i='A';i<=limit;i++)
    {
        for (int j=i;j>='A';j--)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
}