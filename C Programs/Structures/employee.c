#include <stdio.h>
#include <string.h>
struct employee
{
    char name[50];
    char gender[10];
    char designation[20];
    char department[20];
    float basic_pay;
};
struct employee tt[100];
int main()
{
    int n;
    printf("Enter the number of employees:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the details of the employee %d:\n",i+1);
        printf("Name:");
        scanf("%s", &tt[i].name);
        printf("Gender:");
        scanf("%s", &tt[i].gender);
        printf("Designation:");
        scanf("%s", &tt[i].designation);
        printf("Department:");
        scanf("%s", &tt[i].department);
        printf("basic_pay:");
        scanf("%f", &tt[i].basic_pay);
    }
    printf("Gross pay of each employee:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s : Rs. %.2f\n",tt[i].name,tt[i].basic_pay*2);
    }
}