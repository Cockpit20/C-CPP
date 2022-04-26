#include<stdio.h>
union abc2
{
    char a;
    int b;
    double c;
};
union abc2 ob;
int main()
{
    printf("Enter the character:");
    scanf("%c",&ob.a);
    
    printf("Enter the integer:");
    scanf("%d",&ob.b);
    
    printf("Enter the double:");
    scanf("%lf",&ob.c);
    
    printf("Value of a is %c\n",ob.a);
    printf("Value of b is %d\n",ob.b);
    printf("Value of c is %.2lf\n",ob.c);
}
