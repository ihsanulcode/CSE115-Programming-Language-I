#include<stdio.h>
int factorial(int);
int find_npr(int,int);
int main(void)
{
    int n,r,npr;

    printf("INPUT n: ");
    scanf("%d",&n);
    printf("\nINPUT r: ");
    scanf("%d",&r);

    npr = find_npr(n,r);
    printf("\n%dP%d = %d",n,r,npr);
    return 0;
}
int find_npr(int n,int r)
{
    int result;
    result = factorial(n)/factorial(n-r);

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
