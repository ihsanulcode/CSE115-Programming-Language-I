#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    float i;
    float sum = 0.0;

    for(i=1.0;i<=n;i++)
    {
        sum += (1.0/i);
    }
    printf("\nSum of the series is: %.2f",sum);
    return 0;
}
