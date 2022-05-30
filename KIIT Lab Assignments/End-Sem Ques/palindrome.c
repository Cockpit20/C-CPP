#include<stdio.h>
void allPalindromes(int *so_start,int *so_end,int so_arr[],int *so_c)
{
    for (int i = *so_start; i <= *so_end; i++)
    {
        int so_b=i;
        int so_digit,s=0;
        while(so_b>0)
        {
            so_digit=so_b%10;
            s=s*10+so_digit;
            so_b=so_b/10;
        }
        if(i==s)
        {
            *(so_arr+*so_c)=i;
            *so_c=*so_c+1;
        }

    }
    return;
    
}

int main()
{
    int so_x,so_y,so_arr[10000],so_c=0;
    printf("Enter the value of X and Y: ");
    scanf("%d %d",&so_x,&so_y);

    allPalindromes(&so_x,&so_y,so_arr,&so_c);

    for (int i = 0; i < so_c; i++)
    {
        printf("%d ",so_arr[i]);
    }
    
}