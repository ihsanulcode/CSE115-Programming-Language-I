#include<stdio.h>

int main(void)
{
    int n,i;
    int factorial = 1;

    printf("Enter N: ");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        factorial *= i;
    }
    printf("Factorial of %d!: %d",n,factorial);
}
