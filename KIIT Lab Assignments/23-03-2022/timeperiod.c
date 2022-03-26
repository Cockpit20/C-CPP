#include<stdio.h>
#include<math.h>
#define pi 3.14
#define g 9.8
int main()
{
    int l;
    float t;
    printf("Length\tTime Period");
    for (l=10;l<=50;l+=10)
    {
        t=2.0*pi*sqrt(l/g);
        printf("\n%d\t%.2f",l,t);
    }
}