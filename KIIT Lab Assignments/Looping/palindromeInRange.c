#include <stdio.h>
int main()
{
    int start, end;
    printf("Please enter the range:");
    scanf("%d %d", &start, &end);
    for (int i = start; i <= end; i++)
    {
        int b=i;
        int digit,rev=0;
        while(b>0)
        {
            digit=b%10;
            rev=rev*10+digit;
            b=b/10;
        }
        if(rev==i)
        printf("%d ",i);
    }
}