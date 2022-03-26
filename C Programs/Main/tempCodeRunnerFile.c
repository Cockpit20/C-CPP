#include <stdio.h>
int main()
{
    int a1,b1,a2,b2,c1,c2;
    printf("Enter the value of a1 and b1 where a1+ib1 is the complex number: ");
    scanf("%d %d",&a1,&b1);
    printf("Enter the value of a2 and b2 where a1+ib1 is the complex number: ");
    scanf("%d %d",&a2,&b2);
    c1=a1+a2;
    c2=b1+b2;
    printf("Sum of %d+%di and %d+%di = %d+%di",a1,b1,a2,b2,c1,c2);
}