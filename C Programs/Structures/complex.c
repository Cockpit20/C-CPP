#include<stdio.h>
struct complex
{
    float real;
    float img;
};

struct complex a,b,a1,b1,a2,b2; 

int main()
{
    printf("For 1st complex number:\n");
    printf("Enter real part:");
    scanf("%f",&a1.real);
    printf("Enter inch:");
    scanf("%f",&b1.img);
    printf("\nFor 2nd complex number:\n");
    printf("Enter feet:");
    scanf("%f",&a2.real);
    printf("Enter inch:");
    scanf("%f",&b2.img);

    a.real=a1.real+a2.real;
    b.img=b1.img+b2.img;
    printf("\nSum = %.1f + %.1f i",a.real,b.img);

}