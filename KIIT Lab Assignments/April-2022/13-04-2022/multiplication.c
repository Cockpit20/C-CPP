#include<stdio.h>
int main()
{
    int matrixA[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter %d,%d element of Matrix A:",i,j);
            scanf("%d",&matrixA[i][j]);
        }
        
    }
    printf("Matrix A:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",matrixA[i][j]);
        }
        printf("\n");        
    }
    int matrixB[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter %d,%d element of Matrix B:",i,j);
            scanf("%d",&matrixB[i][j]);
        }
        
    }
    printf("Matrix B:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",matrixB[i][j]);
        }
        printf("\n");        
    }
    int matrixC[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrixC[i][j]=0;
            for (int k=0;k<3;k++)
            {
                matrixC[i][j]=matrixC[i][j]+matrixA[i][k]*matrixB[k][j];
            }
        }       
    }
    
    printf("Matrix AB:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",matrixC[i][j]);
        }
        printf("\n");        
    }
    
}