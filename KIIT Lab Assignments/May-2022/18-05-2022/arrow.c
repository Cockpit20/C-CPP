#include<stdio.h>
struct book
{
    char name[20];
    float price;
    int pages;
};

struct book *ptr,b[5];

int main()
{
    int n;
    printf("Enter the number of books: ");
    scanf("%d",&n);
    ptr=b;
    printf("Enter book name,price and pages: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%s %f %d",(ptr+i)->name,&(ptr+i)->price,&(ptr+i)->pages);
    }
    printf("Book\tPrice\tPages\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\t%.2f\t%d\n",(ptr+i)->name,(ptr+i)->price,(ptr+i)->pages);
    }
    
}