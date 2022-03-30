#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for (int i=1;i<=2*n-1;i++)
    {
        int space=i<=n?n-i:i-n;
        for (int j=1;j<=space;j++)
            printf(" ");
        if(i<=n)
        {
            for(int j=1;j<=2*i-1;j++)
                printf("%d",i);
            for(int j=1;j<=2*(n-i);j++)
                printf(" ");
            for(int j=1;j<=2*i-1;j++)
                printf("%d",i);
        }else{
            for(int j=1;j<=4*n-2*i-1;j++)
                printf("%d",2*n-i);
            for(int j=1;j<=2*(i-n);j++)
                printf(" ");
            for(int j=1;j<=4*n-2*i-1;j++)
                printf("%d",2*n-i);
        }
        printf("\n");
    }
}