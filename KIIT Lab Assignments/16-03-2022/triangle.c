#include<stdio.h>
int main()
{
    float x1,y1,x2,y2,x3,y3;
    float m1,m2,m3;
    printf("Enter the co ordinates of Point 1:");
    scanf("%d %d",&x1,&y1);
    printf("Enter the co ordinates of Point 2:");
    scanf("%d %d",&x2,&y2);
    printf("Enter the co ordinates of Point 3:");
    scanf("%d %d",&x3,&y3);
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);
    m3=(y1-y3)/(x1-x3);
    if (m1!=m2 && m2!=m3 && m3!=m1)
    printf("\nThose 3 points form a triangle.");
    else
    printf("\nThose 3 points do not form a triangle.");
}
