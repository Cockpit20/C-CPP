#include<stdio.h>
struct time
{
    int hour;
    int min;
    float sec;
};

struct time t,t1,t2; 

int main()
{
    printf("Enter data for 1st time:\n");
    printf("Enter hour:");
    scanf("%d",&t1.hour);
    printf("Enter min:");
    scanf("%d",&t1.min);
    printf("Enter sec:");
    scanf("%f",&t1.sec);
    printf("\nEnter data for 2nd time:\n");
    printf("Enter hour:");
    scanf("%d",&t2.hour);
    printf("Enter min:");
    scanf("%d",&t2.min);
    printf("Enter sec:");
    scanf("%f",&t2.sec);

    t.hour=t1.hour+t2.hour;
    t.min=t1.min+t2.min;
    t.sec=t1.sec+t2.sec;
    if(t.sec>=60){
        t.min+=(int)(t.sec/60);
        t.sec=(int)t.sec%60;
    }
    if(t.min>=60){
        t.hour+=(int)(t.min/60);
        t.min=(int)t.min%60;
    }
    printf("Sum of times = %d hour %d min %.1f sec",t.hour,t.min,t.sec);

}