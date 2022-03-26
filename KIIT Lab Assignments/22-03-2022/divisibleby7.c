#include<stdio.h>
int main()
{
    int i=101,c=0,sum=0;
    while(i<200){
        if (i%7==0){
            // printf("%d ",i);
            c++;
            sum=sum+i;
        }
        i++;
    }
    printf("\nNumber of integrs divisible by 7 between 100 and 200 is %d and their sum is %d",c,sum);
}