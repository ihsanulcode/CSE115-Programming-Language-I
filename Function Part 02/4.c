#include<stdio.h>
double harmonicSum(int n)
{
    double sum = 0.0;
    for(int i=1;i<=n;i++){
        sum += (1.0/i);
    }

    return sum;
}
int main()
{
    int n;
    printf("Enter N: ");
    scanf("%d",&n);

    double ans = harmonicSum(n);
    printf("Sum of the series is: %.3lf",ans);

    return 0;
}
