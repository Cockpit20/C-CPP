#include<stdio.h>
int Position(int target);
int main()
{
    int target;
    printf("Enter an element to be searched in the array:");
    scanf("%d",&target);
    int pos=Position(target);
    if(pos==-1)
    printf("%d is not found in the array",target);
    else
    printf("%d is found at position %d",target,pos);
}
int Position(int target)
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
    for (int i=0;i<size;i++)
    {
        if(target==n[i])
        return i;
    }
    return -1;
}