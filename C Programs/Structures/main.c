#include<stdio.h>
#include<string.h>

struct student
{
    int id;
    float cgpa;
    char fav_char;
    char name[50];
} rit,chandra,softa;

void print()
{
    printf("%s",softa.name);
}

int main()
{
    chandra.id=2925;
    rit.id=2909;
    softa.id=2922;

    chandra.cgpa=87.2;
    rit.cgpa=87.7;
    softa.cgpa=69.42;

    chandra.fav_char='f';
    softa.fav_char='a';
    rit.fav_char='t';
    
    strcpy(softa.name,"Aasthar opor Bosta");

    // printf("Softa's name is %s",softa.name);
    // printf("\nSofta got %.2f cgpa",softa.cgpa);

    print();
}
