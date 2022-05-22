#include<stdio.h>
#include<string.h>
union Data
{
    int i;
    float f;
    char str[20];
};

union Data data;

int main()
{
    data.i=10;
    printf("%d \n",data.i);

    data.f=34.72;
    printf("%.2f \n",data.f);

    strcpy(data.str,"C Programming");   
    printf("%s",data.str);
}