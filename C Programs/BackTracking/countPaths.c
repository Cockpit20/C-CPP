#include<stdio.h>
int countPaths(int r,int c);
int main()
{
    printf("%d",countPaths(3,3));
}
int countPaths(int r,int c)
{
    if(r==1 || c==1){
        return 1;
    }
    int left=countPaths(r-1,c);
    int right=countPaths(r,c-1);
    return left+right;
}