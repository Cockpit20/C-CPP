#include<stdio.h>
void pattern01(int n);
void pattern02(int n);
int main()
{
    int n,choice;
    printf("Select your choice:\n\t1.Triangular Pattern\n\t2.Reverse Triangular Pattern\n");
    scanf("%d",&choice);
    if(choice==1||choice==2)
    {
        printf("Enter the number of rows:");
        scanf("%d",&n);
        if(choice==1)
        pattern01(n);
        else
        pattern02(n);
    }
    else
    printf("Invalid Choice!");
}
void pattern01(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void pattern02(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}