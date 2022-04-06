#include<stdio.h>
int main()
{
    int n[20];
    for (int i=0;i<20;i++)
    {
        printf("Enter the marks of student %d:",i);
        scanf("%d",&n[i]);
    }
    int sum=0,c=0;
    for (int i=0;i<20;i++)
    {
        if (n[i]>=90)
        c++;
        sum=sum+n[i];
    }
    float avg=(float)sum/(float)20;
    printf("The number of students who scored O grade is %d",c);
    printf("\nThe average marks is %.2f",avg);
}