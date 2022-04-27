#include<stdio.h>
int Position(int target,int s,int e);
int main()
{
    int target;
    printf("Enter an element to be searched in the array:");
    scanf("%d",&target);
    int startIndex;
    printf("Enter the left most index:");
    scanf("%d",&startIndex);
    int endIndex;
    printf("Enter the right most index:");
    scanf("%d",&endIndex);
    int pos=Position(target,startIndex,endIndex);
    if(pos==-1)
    printf("%d is not found in the array in the range of %d to %d",target,startIndex,endIndex);
    else
    printf("%d is found at position %d",target,pos);
}
int Position(int target,int s,int e)
{
    int size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int n[size];
    for (int i=0;i<size;i++)
    {
        printf("Enter number %d:",i+1);
        scanf("%d",&n[i]);
    }
    for (int i=s;i<=e;i++)
    {
        if(target==n[i])
        return i;
    }
    return -1;
}