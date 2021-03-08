#include<stdio.h>
int main(void)
{
    int n;
    double i;
    double sum = 0.0;

    printf("Enter range for series: ");
    scanf("%d",&n);

    for(i=1.0;i<=n;i++)
    {
        sum += 1/i;
    }
    printf("\nsum of the series: %lf\n",sum);
    return 0;
}
