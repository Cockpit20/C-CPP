#include <stdio.h>
struct expenditure
{
    char item[100];
    int price;
    int quantity;
};
struct expenditure expenditures[100];
int main()
{
    int c = 0;
    printf("Enter item-%d details:\n", c+1);
    printf("Item Name:");
    scanf("%s", &expenditures[0].item);
    printf("Price:");
    scanf("%d", &expenditures[0].price);
    printf("Quantity:");
    scanf("%d", &expenditures[0].quantity);
    int press = 1;
    while (press == 1)
    {
        printf("Want to more items(press 1):");
        scanf("%d", &press);
        if (press == 1)
        {
            c++;
            printf("Enter item-%d details:\n", c+1);
            printf("Item Name:");
            scanf("%s", &expenditures[c].item);
            printf("Price:");
            scanf("%d", &expenditures[c].price);
            printf("Quantity:");
            scanf("%d", &expenditures[c].quantity);
        }
        else
            break;
    }

    printf("*********************Expenditure Bill**********************");
    printf("\nSl.\tItem Name\tPrice\tQuantity\tTotal Amount");
    printf("\n---\t--------------\t------\t----------\t-----------------");
    int total_amount=0;
    for (int i = 0; i <=c ; i++)
    {
        printf("\n%d\t%s\t\t%d\t%d\t\t%d", i + 1, expenditures[i].item, expenditures[i].price, expenditures[i].quantity, expenditures[i].price * expenditures[i].quantity);
        total_amount += expenditures[i].price * expenditures[i].quantity;
    }
    printf("\n--------------------------------------------------------------------------------------");
    printf("\n Total expense: Rs.%d\n", total_amount);
    int frnds;
    printf("How many friends to pay the expense:");
    scanf("%d",&frnds);
    printf("Each friend will have to pay : Rs.%d",total_amount/frnds);
}
