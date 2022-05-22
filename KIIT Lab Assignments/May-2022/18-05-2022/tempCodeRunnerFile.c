#include <stdio.h>
#include <string.h>
struct person
{
    char name[20];
    char sex;
    int age;
};

struct person persons[10];

int main()
{
    printf("Enter the details: \n\n");
    printf("Name\tSex\tAge\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%s %c %d", persons[i].name, &persons[i].sex, &persons[i].age);
    }
    int maxM = 0;
    int maxF = 0;
    char oldestMale[20];
    char oldestFemale[20];
    for (int i = 0; i < 10; i++)
    {
        if (persons[i].sex == 'M')
        {
            if (persons[i].age > maxM)
            {
                maxM = persons[i].age;
                strcpy(oldestMale, persons[i].name);
            }
        }
        else if (persons[i].sex == 'F')
        {
            if (persons[i].age > maxF)
            {
                maxF = persons[i].age;
                strcpy(oldestFemale, persons[i].name);
            }
        }
    }

    printf("Oldest female is %s \n", oldestFemale);
    printf("Oldest male is %s ", oldestMale);
}
