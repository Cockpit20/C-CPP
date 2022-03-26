#include<stdio.h>
int main()
{
    int b,digit,s=0; int f;
    for (int i=1;i<=500;i++)
    {
        b=i;s=0;
        while (b>0)
        {
            digit=b%10; f=1;
            for (int j=1;j<=digit;j++)
            {
                f=f*j;
            }
            s=s+f;
            b=b/10;
        }
        if (s==i)
        printf("%d is a strong number.\n",i);
    }
}