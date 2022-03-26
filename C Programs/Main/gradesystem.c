#include<stdio.h>
int main()
{
int total_mark,tm;
printf("\nEnter total mark secured by a student: ");
scanf("%d",&total_mark);
tm=total_mark/10;
switch(tm)
{
case 9: printf("\nSecured grade is O");
break;
case 8: printf("\nSecured grade is E");
break;
case 7: printf("\nSecured grade is A");
break;
case 6: printf("\nSecured grade is B");
break;
case 5: printf("\nSecured grade is C");
break;
case 4: printf("\nSecured grade is D");
break;
default: printf("FAIL");
}
}
