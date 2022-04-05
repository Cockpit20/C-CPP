#include<stdio.h>
int fact(int *x);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("The factorial of %d is %d",n,fact(&n));
}
int fact(int *x)
{
    int f=1;
    for(int i=1;i<=*x;i++)
    {
        f=f*i;
    }
    return f;
}