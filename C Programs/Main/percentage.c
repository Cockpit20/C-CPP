#include<stdio.h>
int main()
{
    int a1,a2,a3,a4,a5;
    printf("Enter the marks of 5 subjects: ");
    scanf("%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5);
    int s=a1+a2+a3+a4+a5;
    float avg=s/5;
    float percentage=s/5;
    printf("The average is %f.\n",avg);
    printf("The percentage is %f .\n",percentage);
}