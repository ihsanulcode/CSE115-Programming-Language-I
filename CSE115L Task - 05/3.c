#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter N: ");
    scanf("%d",&n);

    int sum = 0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("SUM of SERIES: %d",sum);

    return 0;
}
