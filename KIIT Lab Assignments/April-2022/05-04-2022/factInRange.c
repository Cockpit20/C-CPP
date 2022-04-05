#include<stdio.h>
int fact_recursive(int n);
int main()
{
    for (int i = 1; i <= 8; i++)
    {
       printf("The factorial of %d is %d\n",i,fact_recursive(i));
    }
}
int fact_recursive(int n)
{
    if(n==0||n==1)
    return 1;
    else
    return n*fact_recursive(n-1);
}