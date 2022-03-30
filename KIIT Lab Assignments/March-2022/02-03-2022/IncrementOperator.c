#include <stdio.h>
int main()
{
    int x=5;
    int y=x++ + ++x + x++;
    printf("x:%d\n",x);
    printf("y:%d\n",y);
}