#include<stdio.h>
int main()
{
    int matrix[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Enter %d,%d element:",i,j);
            scanf("%d",&matrix[i][j]);
        }
        
    }
    printf("Original Matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");        
    }
    int scalar;
    printf("Enter the scalar to be multiplied:");
    scanf("%d",&scalar);
    printf("After multiplying the matrix with %d:\n",scalar);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t",scalar*matrix[i][j]);
        }
        printf("\n");        
    }
}