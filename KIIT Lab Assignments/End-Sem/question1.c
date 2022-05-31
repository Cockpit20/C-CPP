#include<stdio.h>
void allPrimes(int *so_start,int *so_end,int so_arr[],int *c)
{
    for (int i = *so_start; i <= *so_end; i++)
    {
        int count=0;
        for (int j = 1; j <= i; j++)
        {
            if(i%j==0)
            count++;
        }
        
        if(count==2)
        {
            *(so_arr+*c)=i;
            *c=*c+1;
        }
    }
    return;
    
}

int main()
{
    int so_x,so_y,so_arr[10000],c=0;
    so_x=21052925%10+10;
    so_y=21052925%100+20;

    allPrimes(&so_x,&so_y,so_arr,&c);

    for (int i = 0; i < c; i++)
    {
        printf("%d ",so_arr[i]);
    }
    printf("\nThe number of prime numbers in the range is %d",c);
}