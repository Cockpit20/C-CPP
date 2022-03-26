#include<stdio.h>
int FACT(int n);
int FACTORIAL(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int fa=FACT(n);
    printf("%d! = %d\n",n,fa);
    printf("%d! = %d",n,FACTORIAL(n));
}
int FACT(int n)
{
    int f=1;
    for (int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
//RECURSION
 int FACTORIAL(int n)
 {
    if (n==0||n==1)
    return 1;
    else 
    return n*FACTORIAL(n-1);
 }