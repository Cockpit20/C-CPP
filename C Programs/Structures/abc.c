#include<stdio.h>
union abc
{
    char a;
    int b;
};
union abc ob;
int main()
{
    ob.b=1088;
    ob.a='A';
    printf("%d\n",ob.b);
    printf("%c\n",ob.a);
}
