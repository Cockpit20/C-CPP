#include<stdio.h>
int main()
{
    printf("Let's learn about pointers\n");
    int a=76;
    int *ptra=&a;
    printf("The address of pointer to a is %x\n",&ptra);
    printf("The address of a is %x\n",&a);
    printf("The address of a is %x\n",ptra);
    printf("The value of a is %d",*ptra);
    printf("The value of a is %d",a);
}
