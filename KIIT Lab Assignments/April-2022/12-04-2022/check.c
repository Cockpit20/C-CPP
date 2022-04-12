#include<stdio.h>
int main()
{
    int arr[20];
    for (int i=1;i<=20;i++)
    {
        printf("Enter a number:");
        scanf("%d",&arr[i]);
    }
    int cp=0,cn=0,ce=0,co=0;
    for (int i=1;i<=20;i++)
    {
        if (arr[i]>0)
        cp++;
        if (arr[i]<0)
        cn++;
        if (arr[i]%2==0)
        ce++;
        else
        co++;
    }
    printf("Number of positive numbers is %d\n",cp);
    printf("Number of negative numbers is %d\n",cn);
    printf("Number of even numbers is %d\n",ce);
    printf("Number of odd numbers is %d\n",co);
}