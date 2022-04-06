#include<stdio.h>
int Position(int target,int s,int e);
int main()
{
    int target=5;
    int startIndex=1;
    int endIndex=3;
    int pos=Position(target,startIndex,endIndex);
    if(pos==-1)
    printf("%d is not found in the array in the range of %d to %d",target,startIndex,endIndex);
    else
    printf("%d is found at position %d",target,pos);
}
int Position(int target,int s,int e)
{
    int n[5];
    for (int i=0;i<5;i++)
    {
        printf("Enter number %d:",i+1);
        scanf("%d",&n[i]);
    }
    for (int i=s;i<e;i++)
    {
        if(target==n[i])
        return i;
    }
    return -1;
}