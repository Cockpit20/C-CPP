#include<stdio.h>
int SOD(int n);
int main()
{
int n;
printf("\nEnter a number :");
scanf("%d",&n);
printf("\nThe sum of digits of %d is %d.", n, SOD(n));
}
int SOD(int n)
{
    int b=n;
    int digit,s=0;
    while (b>0)
    {
        digit=b%10;
        s=s+digit;
        b=b/10;
    }
    return s;
}