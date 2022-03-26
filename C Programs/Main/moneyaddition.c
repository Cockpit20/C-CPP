#include <stdio.h>
int main()
{
    int r1,p1,r2,p2,tp;
    float trd,r,tr;
    printf("Enter the amount in rupees and paise separately: ");
    scanf("%d %d",&r1,&p1);
    printf("Enter the amount in rupees and paise separately: ");
    scanf("%d %d",&r2,&p2);
    tr=r1+r2;
    tp=p1+p2;
    if (tp>100)
    trd=(float)tp/100;
    r=tr+trd; 
    printf("Sum of %drupees %dpaise and %drupees %dpaise = Rs.%.2f", r1,p1,r2,p2,r);
}