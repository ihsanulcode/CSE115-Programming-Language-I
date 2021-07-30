#include<stdio.h>
float factorial();
int main(void)
{
    int n;
    printf("Enter the value of N: ");
    scanf("%d",&n);

    int i;
    float sum = 0.0;

    for(i=1;i<=n;i++)
    {
        sum += ( (float)(i) / (float)(factorial(i)) );
    }
    printf("\nSum of the series is: %f",sum);
    return 0;
}
float factorial(int num)
{
    int i;
    int fact = 1;

    for(i=1;i<=num;i++)
    {
        fact *= i;
    }
    return  fact;
}
