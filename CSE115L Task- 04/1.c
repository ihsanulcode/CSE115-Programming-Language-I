#include<stdio.h>
int main(void)
{
    char ope;
    printf("Enter an operator: ");
    scanf("%c",&ope);
    int a;
    printf("Enter 1st operand: ");
    scanf("%d",&a);
    int b;
    printf("Enter 2nd operand: ");
    scanf("%d",&b);

    int ans;

    switch(ope)
    {
        case '+':
            ans = a+b;
            printf("The Result is: %d",ans);
            break;
        case '-':
            ans = a-b;
            printf("The Result is: %d",ans);
            break;
        case '*':
            ans = a*b;
            printf("The Result is: %d",ans);
            break;
        case '/':
            ans = a/b;
            printf("The Result is: %d",ans);
            break;
        default:
            printf("Invalid operator!\nTry again!");
    }

    return 0;
}
