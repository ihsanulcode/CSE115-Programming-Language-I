#include<stdio.h>
void factorial();
int main(void)
{
    int n;
    int fact;
    printf("Enter a number to calculate it's factorial: ");
    scanf("%d",&n);

    factorial(n,&fact);
    printf("\nThe factorial of %d is: %d",n,fact);
    return 0;


}
void factorial(int n,int *fact)
{
    *fact = 1;
    int i;
    for(i=1;i<=n;i++)
        *fact *= i;


}

