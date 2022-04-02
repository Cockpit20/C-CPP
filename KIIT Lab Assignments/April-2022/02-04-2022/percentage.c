#include<stdio.h>
float avg_percentage();
int main()
{
    float returnVal=avg_percentage();
    printf("The average is %.2f\n",returnVal);
    printf("The percentage is %.2f percent",returnVal);
}
float avg_percentage()
{
    int p,c,m;
    printf("Enter the marks in physics:");
    scanf("%d",&p);
    printf("Enter the marks in chemistry:");
    scanf("%d",&c);
    printf("Enter the marks in maths:");
    scanf("%d",&m);
    float avg=(float) (p+c+m)/(float)(3);
    float percentage=(float) (p+c+m)/(float)(300)*(float)(100);
    return percentage;
}