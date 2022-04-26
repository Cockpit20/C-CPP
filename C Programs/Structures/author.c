#include<stdio.h>
#include<string.h>
struct book
{
    char title[100];
    char author[100];
    char publication[100];
    int price;
};
struct book books[100];
int main()
{
    int n;
    printf("Enter the number of books:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter book-%d data:\n",i+1);
        printf("Title:");
        scanf("%s",&books[i].title);
        printf("Author:");
        scanf("%s",&books[i].author);
        printf("Publication:");
        scanf("%s",&books[i].publication);
        printf("Price:");
        scanf("%d",&books[i].price);
    }
    char writer[100];
    printf("\nEnter the author's name:");
    scanf("%s",&writer);
    printf("\nSl. No.\tTitle\tPublication\tPrice(Rs.)");
    int c=1;
    for (int i = 0; i < n; i++)
    {
        if(strcmp(writer,books[i].author)==0){
            printf("\n%d\t%s\t%s\t\t%d",c,books[i].title,books[i].publication,books[i].price);
            c++;
        }
    }
    
}
