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

    t.hour=0;
    if(t1.sec>t2.sec){
        t.sec=t1.sec-t2.sec;
    }else{
        t.sec=t1.sec+60-t2.sec;
        t.min=-1;
    }
    if(t1.min>t2.min){
        t.min=t.min+t1.min-t2.min;
    }else{
        t.min=t.min+t1.min+60-t2.min;
        t.hour=-1;
    }
    t.hour=t.hour+t1.hour-t2.hour;

    printf("Difference of times = %d hour %d min %.1f sec",t.hour,t.min,t.sec);

}