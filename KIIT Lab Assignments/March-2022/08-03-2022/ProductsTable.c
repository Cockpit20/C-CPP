#include <stdio.h>
int main()
{
    char n1[25];
    char n2[25];
    int c1,c2;
    float p1,p2;
    printf("Enter the name of the products: ");
    scanf("%s %s",&n1,&n2);
    printf("Enter the code of the products: ");
    scanf("%d %d",&c1,&c2);
    printf("Enter the price of the products: ");
    scanf("%f %f",&p1,&p2);  
    printf("Name\tCode\tPrice\n");
    printf("%s\t%d\t%.2f\n",n1,c1,p1);  
    printf("%s\t%d\t%.2f\n",n2,c2,p2);  
}