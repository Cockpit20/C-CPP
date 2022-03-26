#include<stdio.h>
int  main()
{
    int score,i=1,sum_score=0;
    float avg_score;
    while(i<=11){
        printf("Enter the score of next player no %d: ",i);
        scanf("%d",&score);
        sum_score=sum_score+score;
        i++;
    }
    avg_score=(float)sum_score/11;
    printf("THe average score scored by the team is %.2f",avg_score);
}