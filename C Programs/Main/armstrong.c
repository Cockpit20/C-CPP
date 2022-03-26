#include<stdio.h>
int main()
{
    int b,digit,s=0;
    for (int i=1;i<=500;i++)
    {
        b=i;s=0;
        while (b>0)
        {
            digit=b%10;
            s=s+digit*digit*digit;
            b=b/10;
        }
        if (s==i)
        printf("%d is an armstrong number.\n",i);
    }
}