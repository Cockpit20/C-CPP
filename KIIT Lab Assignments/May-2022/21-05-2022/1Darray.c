#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*ptr,sum=0;
    printf("Enter number of elements:");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",ptr+i);
    }
    for (int i = 0; i < n; i++)
    {
        sum+=*(ptr+i);
    }
    free(ptr);
    printf("Sum= %d",sum);
    
    
}