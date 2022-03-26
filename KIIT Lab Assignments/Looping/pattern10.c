#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    for (int i=1;i<=n+1;i++)
    {
        for(int j=1;j<=n-i;j++)
        printf(" ");
        //Complete your code here.
    }
}