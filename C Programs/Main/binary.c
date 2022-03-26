#include <stdio.h>
int main()
{
    int n; int digit,s=0,base=1;
    printf("Enter a binary number:");
    scanf("%d",&n);
    int b=n;
    while (b>0)
    {
        digit=b%10;
        s=s+digit*base;
        b=b/10;
        base=base*2;
    }
    printf("The binary number is %d.\n",n);
    printf("The decimal equivalent is %d.",s);
}