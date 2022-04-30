#include<stdio.h>
int main()
{
    int matrix[20][20];
    int size=4;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Enter [%d][%d] element:",i,j);
            scanf("%d",&matrix[i][j]);
        }  
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t",matrix[i][j]);
        }  
        printf("\n");
    }
    int mid=size/2;
    printf("The middle element is %d",matrix[mid][mid]);
    
}