#include<stdio.h>
int main(void)
{
    float x;
    printf("Enter the value of X: ");
    scanf("%f",&x);

    float ans = sqrt(pow(x,3)+pow(x,2)-(12*x)-12);
    printf("Answer: %f",ans);

    return 0;
}
