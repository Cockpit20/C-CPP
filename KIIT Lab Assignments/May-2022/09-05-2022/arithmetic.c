#include <stdio.h>
int arith(int n1, int n2,char op);
int main()
{
    int n1, n2;
    char op;
    printf("Enter an operator:");
    scanf("%c", &op);
    printf("Enter 2 numbers:");
    scanf("%d %d", &n1, &n2);
    
    

    if (op == '+' || op == '-' || op == '*' || op == '/')
        printf("%d %c %d = %d \n", n1, op, n2, arith(n1, n2, op));
    else
        printf("Invalid Input!\n");
}
int arith(int n1,  int n2,char op)
{
    if (op == '+')
        return n1 + n2;
    else if (op == '-')
        return n1 - n2;
    else if (op == '*')
        return n1 * n2;
    else if (op == '/')
        return n1 / n2;
}