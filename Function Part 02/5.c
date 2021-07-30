#include<stdio.h>
int sumOfDigits(int x)
{
    int sum = 0;

    while(x!=0)
    {
        sum += x%10;
        x /= 10;
    }

    return sum;
}
int main()
{
    int digit;
    printf("Enter some digit: ");
    scanf("%d",&digit);

    int ans = sumOfDigits(digit);
    printf("Sum of digits: %d",ans);

    return 0;
}

