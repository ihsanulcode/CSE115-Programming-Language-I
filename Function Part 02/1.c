#include<stdio.h>
int sum(int n)
{
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum += i;
    }

    return sum;
}
int main()
{
    int n;
    printf("Enter N: ");
    scanf("%d",&n);

    int ans = sum(n);
    printf("Sum of the series is: %d",ans);

    return 0;
}
