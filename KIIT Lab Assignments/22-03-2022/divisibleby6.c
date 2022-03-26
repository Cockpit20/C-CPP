#include<stdio.h>
int main()
{
    int i=1,c=0,sum=0;
    while(i<100){
        if (i%4!=0)
        {
            if (i%6==0)
            {
            // printf("%d ",i);
            c++;
            sum=sum+i;
            }
        }
        i++;
    }
    printf("\nNumber of integrs divisible by 6 but not divisible by 4 between 0 and 100 is %d and their sum is %d",c,sum);
}