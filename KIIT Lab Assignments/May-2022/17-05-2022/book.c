#include<stdio.h>

struct book
{
    char name[20];
    float price;
    int pages;
};

struct book b1,b2;

int main()
{
    printf("Enter names,prices & no. of pages of 2 books:\n");
    scanf("%s %f %d",b1.name,&b1.price,&b1.pages);
    scanf("%s %f %d",b2.name,&b2.price,&b2.pages);

    printf("And this is what you entered:\n");
    printf("%s %.2f %d\n",b1.name,b1.price,b1.pages);
    printf("%s %.2f %d",b2.name,b2.price,b2.pages);

}
