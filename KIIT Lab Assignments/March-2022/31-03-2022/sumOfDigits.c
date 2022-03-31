#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int b=n;
    int digit,s=0,c=0;
    while(b>0){
        digit=b%10;
        s=s+digit;
        c++;
        b=b/10;
    }
    float avg=(float)s/(float)c;
    printf("The sum digits of the number %d is %d\n",n,s);
    printf("The average of sum digits of the number %d is %.2f",n,avg);
}