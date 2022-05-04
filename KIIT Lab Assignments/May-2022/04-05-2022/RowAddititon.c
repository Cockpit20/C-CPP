#include<stdio.h>
int main()
{
    int a[4][5],b[4];
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Enter [%d][%d] element:",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }

    int (*pa)[5],*pb;
    pa=a;
    pb=b;

    for (int i = 0; i < 4; i++)
    {
        pb[i]=0;
        for (int j = 0; j < 5; j++)
        {
            pb[i]=pb[i]+pa[i][j];
        }
        printf("\nSum of Row %d:%d",i+1,pb[i]);
    }
}