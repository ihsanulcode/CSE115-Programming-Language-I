#include<stdio.h>
int main(void)
{
    float x,n;
    printf("Enter x: ");
    scanf("%f",&x);
    printf("Enter n: ");
    scanf("%f",&n);

    float sum = 1.0;
    int fact = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            fact *= j;
        }
        sum += (pow(x,i)/fact);
        fact = 1;
    }
    printf("SUM of the series is: %.3f",sum);

    return 0;
}
