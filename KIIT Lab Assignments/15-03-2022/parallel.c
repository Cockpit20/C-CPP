#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4;
    printf("Enter the first point of the first line: ");
    scanf("%d %d",&x1,&y1);
    printf("Enter the second point of the first line: ");
    scanf("%d %d",&x2,&y2);
    printf("Enter the first point of the second line: ");
    scanf("%d %d",&x3,&y3);
    printf("Enter the second point of the second line: ");
    scanf("%d %d",&x4,&y4);
    float m1=((float)(y2-y1)/(float)(x2-x1));
    float m2=((float)(y4-y3)/(float)(x4-x3));
    float t=m1==m2;
    printf("Are the two lines parallel?\n");
    printf("Display: 1 for Yes, 0 for No: %.2f",t);
}