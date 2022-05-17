#include <stdio.h>
#include <string.h>

struct employee
{
    char name[20];
    char address[10];
    int age;
    float salary;
};

struct employee employees[100];

int main()
{
    int n;
    printf("Enter the number of employees:");
    scanf("%d",&n);

    printf("Enter the details:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%s %s %d %f",employees[i].name,employees[i].address,&employees[i].age,&employees[i].salary);
    }

    float salary_sum=0;
    printf("Details of the employees:\n");
    printf("Name\tAddress\tAge\tSalary\n");
    for (int i = 0; i < n; i++)
    {
        salary_sum+=employees[i].salary;
        printf("%s\t%s\t%d\t%.2f\n",employees[i].name,employees[i].address,employees[i].age,employees[i].salary);
    }
    printf("Average salary = %.2f",salary_sum/(float)n);
    
}
