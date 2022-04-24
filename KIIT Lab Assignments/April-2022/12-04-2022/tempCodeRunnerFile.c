#include<stdio.h>
int main()
{
    int matrixA[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Enter %d,%d element of Matrix A:",i,j);
            scanf("%d",&matrixA[i][j]);
        }
        
    }
    printf("Matrix A:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t",matrixA[i][j]);
        }
        printf("\n");        
    }
    int matrixB[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Enter %d,%d element of Matrix B:",i,j);
            scanf("%d",&matrixB[i][j]);
        }
        
    }
    printf("Matrix B:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t",matrixB[i][j]);
        }
        printf("\n");        
    }
    printf("Sum of Matrix A and B:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t",matrixA[i][j]+matrixB[i][j]);
        }
        printf("\n");        
    }
    
}