#include<stdio.h>
int find_max(int n);
int count_leader(int n);
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int largest=find_max(n);
    printf("The largest number is %d\n",largest);
    int leaderCount=count_leader(n);
    printf("The number of leaders is %d",leaderCount);
}
int find_max(int n)
{
    int num,largest=0;
    for (int i=1;i<=n;i++)
    {
        printf("Enter the number:");
        scanf("%d",&num);
        if(num>largest)
        largest=num;
    }
    return largest;
}
int count_leader(int n)
{
    int num,largest=0,c=0;
    for (int i=1;i<=n;i++)
    {
        printf("Enter the number:");
        scanf("%d",&num);
        if(num>largest)
        {
            largest=num;
            c++;
        }
    }
    return c;
}