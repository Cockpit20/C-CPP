#include<stdio.h>
void pattern01(int r,int c);
int main()
{
    pattern01(4,0);
}
void pattern01(int r,int c)
{
    if(r==0)
    return;
    if(c<r){
        printf("*");
        pattern01(r,c+1);
    }else{
        printf("\n");
        pattern01(r-1,0);
    }
}