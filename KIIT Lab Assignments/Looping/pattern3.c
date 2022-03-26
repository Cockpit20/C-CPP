#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    int limit='A'+n-1;
    for (char i='A';i<=limit;i++)
    {
        for (char j='A';j<=i;j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
}