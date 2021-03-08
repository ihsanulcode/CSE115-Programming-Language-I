#include<stdio.h>
int main(void)
{
    int num;
    int sum = 0;

    printf("Enter a digit: ");
    scanf("%d",&num);

    while(num!=0)
    {
        sum = sum + num%10;
        num = num/10;
    }
    printf("\nsum of digits = %d",sum);
    return 0;
}
