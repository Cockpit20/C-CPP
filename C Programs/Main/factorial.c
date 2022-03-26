#include<stdio.h>
int main(void)
{
    int n;int f=1;
    printf("Enter a number: \n");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
    f=f*i;
    }
    printf("The factorial of %d is %d.",n,f);
}