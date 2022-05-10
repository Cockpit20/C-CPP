#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="KIIT";
    int n=strlen(str);
    for (int i = 0; i < 2*n-1; i++)
    {
        int col=i<n?n-i:i-n+2;
        int spaces=i<n?2*i:3*n-2*i;
        for (int j = 0; j < col; j++)
        {
            printf("%c",str[j]);
        }
        for (int j = 0; j < spaces ; j++)
        {
            printf(" ");
        }
        for (int j = col-1; j >=0 ; j--)
        {
            printf("%c",str[j]);
        }

        printf("\n");
        
    }
    
    
}