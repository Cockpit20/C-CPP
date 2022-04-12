#include<stdio.h>
int main()
{
    int matrix[4][5];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Enter %d,%d element:",i,j);
            scanf("%d",&matrix[i][j]);
        }
        
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");        
    }
    
}