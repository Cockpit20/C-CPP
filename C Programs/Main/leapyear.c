#include<stdio.h>
int main()
{
    //int y;
    //printf("Enter the year: ");
    //scanf("%d",&y);
    for (int y=2000;y<=2100;y++)
    {
        if (y%4==0&&y%100!=0||y%400==0)
        printf("%d is a leap year.\n",y);    
        //else
        //printf("%d is a not leap year.",y);
    }
}