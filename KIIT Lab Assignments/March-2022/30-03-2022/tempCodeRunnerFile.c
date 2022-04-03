#include<stdio.h>
void display(int n,char ch);
int main()
{
    int n;
    char ch;
    printf("Enter the number and the character:");
    scanf("%d %c",&n,&ch);
    display(n,ch);
}
void display(int n,char ch)
{
    for (int i=1;i<=n;i++)
    {
        printf("%c ",ch);
    }
}