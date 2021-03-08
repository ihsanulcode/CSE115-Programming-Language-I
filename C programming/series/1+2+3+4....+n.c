#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter the value of N: ");
    scanf("%d",&n);

    int sum = 0;
    int i;

    for(i=1;i<=n;i++)
    {
        sum += i;
    }
    printf("\nSum of the series is: %d",sum);
    return 0;
}
