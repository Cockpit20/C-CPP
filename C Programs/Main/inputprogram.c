#include<stdio.h>
int main()
{
    char fname[25],lname[25];
    printf("Enter your first name : ");
    scanf("%s",fname);
    printf("Enter your last name : ");
    scanf("%s",lname);
    printf("Your full name is %s  %s",fname, lname);
}