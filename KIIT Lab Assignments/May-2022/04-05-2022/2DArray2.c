#include<stdio.h>
int main()
{
    int a[4][5];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Enter [%d][%d] element:",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }
    
    int (*ptr)[5];
    ptr=a;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t",ptr[i][j]);
        }
        printf("\n");
    }

}