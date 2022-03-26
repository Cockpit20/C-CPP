#include<stdio.h>
int  main()
{
    int score,i=1,c=0;
    again:
    printf("Enter the score of next player no %d: ",i);
    scanf("%d",&score);
    if (score<0) goto again;
    if (score>=100)
    c++;
    i++;
    if (i<=11) goto again;
    printf("Total no of players made century=%d",c);
}