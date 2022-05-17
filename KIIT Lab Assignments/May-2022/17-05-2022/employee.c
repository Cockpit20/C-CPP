#include <stdio.h>
#include <string.h>

struct employee
{
    char name[20];
    int age;
    float salary;
};

struct employee e1 = {"Sanjay", 30, 55.50};
struct employee e2;

int main()
{
    // e2.age = e1.age;
    // e2.salary = e1.salary;
    // strcpy(e2.name, e1.name);

    e2=e1;

    printf("%s %d %.2f", e2.name, e2.age, e2.salary);
}
