#include <stdio.h>
int main()
{
    int start, end;
    printf("Please enter the range:");
    scanf("%d %d", &start, &end);
    for (int i = start; i <= end; i++)
    {
        for(int j=1;j<=end;j++)
        {
            if(j*j==i)
            printf("%d ",i);
        }
    }
}