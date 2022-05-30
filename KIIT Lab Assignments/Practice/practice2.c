#include<stdio.h>
void allPrimes(int *start,int *end,int arr[],int *c)
{
    
    for (int i = *start; i <= *end; i++)
    {
        int b=i;
        int digit,s=0;
        while(b>0)
        {
            digit=b%10;
            s=s*10+digit;
            b=b/10;
        }
        if(i==s)
        {
            *(arr+*c)=i;
            *c=*c+1;
        }
        
    }
    return;
    
}
int main()
{
    int x,y,arr[1000],c=0;
    printf("Enter the value of x and y:");
    scanf("%d %d",&x,&y);

    allPrimes(&x,&y,arr,&c);    

    for (int i = 0; i < c; i++)
    {
        printf("%d ",arr[i]);
    }
    
}