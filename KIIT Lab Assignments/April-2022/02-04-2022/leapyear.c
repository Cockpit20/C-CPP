#include<stdio.h>
int isLeapYear(int year);
int main()
{
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    int leapYear=isLeapYear(year);
    if(leapYear==1)
    printf("%d is a leap year",year);
    else
    printf("%d is not a leap year",year);
}
int isLeapYear(int year)
{
    if (year%4==0&&year%100!=0||year%400==0)
    return 1;
    else 
    return 0;
}