#include<stdio.h>
void add_mat_row(int (*pa)[5],int *pb);
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

    add_mat_row(a,b);

    for (int i = 0; i < 4; i++)
    {
        printf("\nSum of Row %d:%d",i+1,b[i]);
    }
    
}

void add_mat_row(int (*pa)[5],int *pb)
{
    for (int i = 0; i < 4; i++)
    {
        pb[i]=0;
        for (int j = 0; j < 5; j++)
        {
            pb[i]=pb[i]+pa[i][j];
        }
    }
}