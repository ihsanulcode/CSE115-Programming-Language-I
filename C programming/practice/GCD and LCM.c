#include<stdio.h>
int main(void)
{
    int number1,number2,gcd,reminder,lcm;

    printf("Enter two number: \n");
    scanf("%d%d",&number1,&number2);

    int n1 = number1;
    int n2 = number2;

    while(n2 != 0)
    {
        reminder = n1%n2;
        n1 = n2;
        n2 = reminder;
    }
    printf("\nGCD: %d",n1);
    gcd = n1;
    lcm = (number1*number2)/gcd;
    printf("\nLCM: %d",lcm);

    return 0;
}
