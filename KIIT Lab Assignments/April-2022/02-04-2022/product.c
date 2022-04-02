#include<stdio.h>
float find_product(float a, int b);
int main()
{
    float a;
    int b;
    printf("Enter the float and int value:");
    scanf("%f %d",&a,&b);
    float p=find_product(a,b);
    printf("The product of %.2f and %d is %.2f",a,b,p);
}
float find_product(float a, int b)
{
    float p=a*(float)b;
    return p;
}