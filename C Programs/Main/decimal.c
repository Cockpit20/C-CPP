#include <stdio.h>
int main()
{
    int n; int digit,s=0;
    printf("Enter a decimal number:");
    scanf("%d",&n);
    int b=n;
    while (b>0)
    {
        digit=b%2;
        s=s*10+digit;
        b=b/2;    
    }
    printf("The decimal number is %d.\n",n);
    printf("The binary equivalent is %d.",s);
}