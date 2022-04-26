#include<stdio.h>
struct distance
{
    int km;
    float m;
};

struct distance d,d1,d2; 

int main()
{
    printf("Enter data for 1st distance:\n");
    printf("Enter km:");
    scanf("%d",&d1.km);
    printf("Enter m:");
    scanf("%f",&d1.m);
    printf("\nEnter data for 2nd distance:\n");
    printf("Enter km:");
    scanf("%d",&d2.km);
    printf("Enter m:");
    scanf("%f",&d2.m);

    d.km=d1.km+d2.km;
    d.m=d1.m+d2.m;
    if(d.m>=1000){
        d.km+=(int)(d.m/1000);
        d.m=(int)d.m%1000;
    }
    printf("Sum of distances = %d km %.1f m",d.km,d.m);

}