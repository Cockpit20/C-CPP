#include<stdio.h>
int main()
{
    int n; int num;
    int ce=0,co=0,so=0,se=0;
    printf("How many numbers do you want to enter?");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("Enter the number:");
        scanf("%d",&num);
        if (num%2==0)
        {
            ce++;
            se=se+num;
        }else{
            co++;
            so=so+num;
        }
    }
    float avge=(float)se/(float)ce;
    float avgo=(float)so/(float)co;
    printf("The average of even numbers is %.2f\n",avge);
    printf("The average of odd numbers is %.2f",avgo);
}