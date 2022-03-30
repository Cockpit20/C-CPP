#include<stdio.h>
int main()
{
    float P,Q,R,S;
    printf("Enter the value of P,Q,R,S:");
    scanf("%d %d %d %d",&P,&Q,&R,&S);
    if (P*S==R*Q)
    {
        printf("THe wheatstone bridge is balanced.");
        return (0);
    }
    printf("THe wheatstone bridge is not balanced.");
    S=R*Q/P;
    printf("\nChoose S=%.2f to balance the bridge.",S);
    return (0);
}