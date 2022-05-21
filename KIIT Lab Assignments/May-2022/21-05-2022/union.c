#include<stdio.h>
#include<string.h>
union book
{
    char name[50];
    char author[20];
    float price;
    int pages;
};

union book b;

int main()
{
    strcpy(b.name,"Data Structures and Algorithms");
    printf("Name= %s \n",b.name);

    strcpy(b.author,"Shi-kuo Chang");
    printf("Author= %s \n",b.author);

    b.price=499.99;
    printf("Price= %.2f \n",b.price);

    b.pages=360;
    printf("Pages= %d",b.pages);    
}