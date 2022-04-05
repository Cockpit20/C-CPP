#include<stdio.h>
int isPrime(int n);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(isPrime(n))
    printf("Number is prime");
    else
    printf("Number is not prime");
}
int isPrime(int n)
{
    //Write your code here
    int c=0;
    for (int i = 1; i <= n; i++)
    {
        if(n%i==0)
        c++;
    }
    return c==2;
}