#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int c=0;
    while(n!=0){
        c++;
        printf("Enter a number:");
        scanf("%d",&n);
    }
    printf("Count of numbers entered by the user is %d",c);
}