#include<stdio.h>
int main()
{
    unsigned int a=60;
    unsigned int b=13;

    int c=0;

    c=a&b;
    printf("Value of c is %d\n",c);

    c=a|b;
    printf("Value of c is %d\n",c);
    
    c=a^b;
    printf("Value of c is %d\n",c);

    c=~a;
    printf("Value of c is %d\n",c);

    c=a<<2;
    printf("Value of c is %d\n",c);

    c=a>>2;
    printf("Value of c is %d",c);
}