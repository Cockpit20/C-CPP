#include<stdio.h>
int main()
{
    int x;
    char a;
    float p,q;

    x=125;
    a='A';
    p=10.25,q=18.76;

    printf("%d is stored at %u\n",x,&x);
    printf("%c is stored at %u\n",a,&a);
    printf("%f is stored at %u\n",p,&p);
    printf("%f is stored at %u\n",q,&q);
}