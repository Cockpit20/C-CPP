#include<stdio.h>
struct distance
{
    int feet;
    float inch;
};

struct distance d,d1,d2; 

int main()
{
    printf("Enter data for 1st distance:\n");
    printf("Enter feet:");
    scanf("%d",&d1.feet);
    printf("Enter inch:");
    scanf("%f",&d1.inch);
    printf("\nEnter data for 2nd distance:\n");
    printf("Enter feet:");
    scanf("%d",&d2.feet);
    printf("Enter inch:");
    scanf("%f",&d2.inch);

    d.feet=d1.feet+d2.feet;
    d.inch=d1.inch+d2.inch;
    if(d.inch>=12){
        d.feet+=(int)(d.inch/12);
        d.inch=(int)d.inch%12;
    }
    printf("Sum of distances = %d feet %.1f inch",d.feet,d.inch);

}