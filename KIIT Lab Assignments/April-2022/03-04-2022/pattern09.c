#include<stdio.h>
int main()
{
    int n;
    printf("Enter the  number of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int index=1;
        if(i%2==0)
        index=0;
        else
        index=1;
        for(int j=1;j<=i;j++)
        {
            printf("%d ",index);
            if(index==1)
            index=0;
            else
            index=1;
        }
        printf("\n");
    }
}