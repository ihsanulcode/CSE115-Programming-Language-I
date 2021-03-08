#include<stdio.h>
int factorial(int);
int combination(int,int);
int main(void)
{
    int n,r,ncr;

    printf("INPUT n: ");
    scanf("%d",&n);
    printf("\nINPUT r: ");
    scanf("%d",&r);

    ncr = combination(n,r);
    printf("%dC%d = %d",n,r,ncr);

    return 0;
}
int combination(int n,int r)
{
    int result;

    result = factorial(n)/(factorial(r)*factorial(n-r));

    return result;
}
int factorial(int x)
{
    int i;
    int f = 1;
    for(i=1;i<=x;i++)
    {
        f *= i;
    }
    return (f);
}
