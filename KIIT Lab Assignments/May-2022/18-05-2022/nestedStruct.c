#include<stdio.h>
struct address
{
    char phone[15];
    char city[25];
    int pin;
};

struct emp
{
    char name[25];
    struct address adr;
};

struct emp e={"Jeru","531046","Nagpur",10};


int main()
{
    printf("Name= %s Phone=%s \n",e.name,e.adr.phone);
    printf("City= %s PIN= %d",e.adr.city,e.adr.pin);
}