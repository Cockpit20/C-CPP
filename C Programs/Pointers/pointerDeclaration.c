#include<stdio.h>
int main()
{
    int m=10,n,o;
    int *z;
    z=&m;
    printf("%p\n",z);
    printf("%d\n",*z);
    printf("%p\n",&m);
    printf("%p\n",&n);
    printf("%p\n",&o);
    printf("%p\n",&z);
}