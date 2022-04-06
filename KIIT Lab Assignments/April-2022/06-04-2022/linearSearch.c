#include<stdio.h>
int Position(int target);
int main()
{
    int target=5;
    int pos=Position(target);
    if(pos==-1)
    printf("%d is not found in the array",target);
    else
    printf("%d is found at position %d",target,pos);
}
int Position(int target)
{
    int n[5];
    for (int i=0;i<5;i++)
    {
        printf("Enter number %d:",i+1);
        scanf("%d",&n[i]);
    }
    for (int i=0;i<5;i++)
    {
        if(target==n[i])
        return i;
    }
    return -1;
}