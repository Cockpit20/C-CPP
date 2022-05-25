#include <stdio.h>
#include <string.h>

struct library
{
    int book_id;
    char book_name[20];
    float book_price;
    char author_name[20];
    int quantity;
};

struct library books[100];

void purchase(int quantity)
{
    printf("Enter the book id: ");
    scanf("%d", &books[quantity].book_id);

    printf("Enter the book name: ");
    scanf("%s", &books[quantity].book_name);

    printf("Enter the book price: ");
    scanf("%f", &books[quantity].book_price);

    printf("Enter the author name: ");
    scanf("%s", &books[quantity].author_name);
}

int issue(int quantity)
{
    return quantity - 1;
}

int search(int book_id, char book_name[], int quantity)
{
    for (int i = 0; i < quantity; i++)
    {
        if (book_id == books[i].book_id || strcmp(book_name, books[i].book_name) == 0)
        {
            quantity = issue(quantity);
            return 1;
        }
    }
    return 0;
}

void display(int quantity)
{
    for (int i = 0; i < quantity; i++)
    {
        printf("\n\nBook ID: %d \nBook Name: %s \nBook Price: %.2f \nAuthor Name: %s", books[i].book_id, books[i].book_name, books[i].book_price, books[i].author_name);
    }
}

int main()
{
    int input;
    int i = 0;

    while (1)
    {
        printf("\n\nEnter 1 to purchase a book \nEnter 2 to search for a book \nEnter 3 to display all books \nEnter 4 to exit \n -->");
        scanf("%d", &input);
        if (input == 1)
        {
            purchase(i);
            i++;
        }
        else if (input == 2)
        {
            int book_id;
            char book_name[20];
            printf("Enter the book id: ");
            scanf("%d", &book_id);
            printf("Enter the book name: ");
            scanf("%s", &book_name);
            if (search(book_id, book_name, i) == 1)
                printf("Book is found!");
            else
                printf("Book not found!");
        }
        else if (input == 3)
        {
            display(i);
        }
        else if(input==4)
        {
            printf("Exited sucessfully!");
            break;
        }
        else
        {
            printf("Invalid Input!");
        }
    }
}
