#include <stdio.h>
#define g 9.8
int main()
{
    int u,t;
    float v,s;
    printf("Enter the initial velocity:");
    scanf("%d",&u);
    t=1;
    v=(float)(u+g*t);
    s=(float)(u*t+g*t*t/2);
    printf("\nVelocity=%.2fm/s and Distance covered=%.2fm afters 1s",v,s);
    t++;
    v=(float)(u+g*t);
    s=(float)(u*t+g*t*t/2);
    printf("\nVelocity=%.2fm/s and Distance covered=%.2fm afters 2s",v,s);
    t++;
    v=(float)(u+g*t);
    s=(float)(u*t+g*t*t/2);
    printf("\nVelocity=%.2fm/s and Distance covered=%.2fm afters 3s",v,s);
    t++;
    v=(float)(u+g*t);
    s=(float)(u*t+g*t*t/2);
    printf("\nVelocity=%.2fm/s and Distance covered=%.2fm afters 4s",v,s);
    t++;
    v=(float)(u+g*t);
    s=(float)(u*t+g*t*t/2);
    printf("\nVelocity=%.2fm/s and Distance covered=%.2fm afters 5s",v,s);
}