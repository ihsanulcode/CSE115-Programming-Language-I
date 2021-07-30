#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int sum = 0;
    for(int i=1;i<=n;i++){
        sum += i;
    }
    printf("SUM: %d",sum);

    return 0;

}
