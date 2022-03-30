#include<stdio.h>
void display(int n);
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    display(n);
}
void display(int n)
{
    for (int i=1;i<=n;i++)
    {
        printf("=");
        printf("\n");
    }
}