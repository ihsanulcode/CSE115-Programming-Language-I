#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter a number to calculate it's factorial: ");
    scanf("%d",&n);
    int *p = &n;

    int fact = 1;
    int i;
    for(i=1;i<=*p;i++)
        fact *= i;

    printf("\nFactorial of %d is: %d",*p,fact);
}
