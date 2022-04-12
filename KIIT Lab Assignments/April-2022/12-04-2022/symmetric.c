#include<stdio.h>
int main()
{
    int matrix[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Enter %d,%d element:",i,j);
            scanf("%d",&matrix[i][j]);
        }
        
    }
    printf("Original Matrix:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");        
    }
    printf("Traspose of the Matrix:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t",matrix[j][i]);
        }
        printf("\n");        
    }
    int c=0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(matrix[i][j]==matrix[j][i])
            c++;
        }      
    }
    if (c==4*4)
    printf("The matrix is symmetric");
    else
    printf("The matrix is not symmetric");
}