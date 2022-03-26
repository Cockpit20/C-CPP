#include<stdio.h>
int main()
{
    char s[9]=" KIITCSIT";
    int n=8;
    for (int i=1;i<=2*n-1;i++)
    {
        int c1=i<n?n-i+1:i-n+1;
        for (int j=1;j<=c1;j++)
        {
        printf("%c",s[j]);
        }
        int space=i<=n?2*i-2:4*n-2*i-2;
        for (int i=1;i<=space;i++)
        {
        printf(" ");
        }
        int c2=i<n?n-i+1:i-n+1;
        for (int j=c2;j>=1;j--)
        {
        printf("%c",s[j]);
        }
        printf("\n");
    }
}