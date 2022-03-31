#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int s=0;
    for (int i=1;i<=n;i++){
        int num=(i+1)*i/2;
        s=s+num;
    }
    printf("The sum of the series is %d",s);
}