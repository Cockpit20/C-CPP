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
    int max=matrix[0][0];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i==j && matrix[i][j]>max)
            max=matrix[i][j];
        }      
    }
    printf("The maximum element among diagonal elements of the array is %d",max);
}