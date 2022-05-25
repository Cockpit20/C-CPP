#include<stdio.h>
void allPrimes(int *start,int *end,int arr[],int *c)
{
    for (int i = *start; i <= *end; i++)
    {
        int count=0;
        for (int j = 1; j <= i; j++)
        {
            if(i%j==0)
            count++;
        }
        
        if(count==2)
        {
            *(arr+*c)=i;
            *c=*c+1;
        }

    }
    return;
    
}

int main()
{
    int x,y,arr[10000],c=0;
    printf("Enter the value of X and Y: ");
    scanf("%d %d",&x,&y);

    allPrimes(&x,&y,arr,&c);

    for (int i = 0; i < c; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nThe number of prime numbers in the range is %d",c);
    
}