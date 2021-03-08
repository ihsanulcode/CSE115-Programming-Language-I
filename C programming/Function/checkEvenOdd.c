#include<stdio.h>
void checkEvenOdd (int);
int main(void)
{
    int num;
    printf("Enter an integer number: ");
    scanf("%d",&num);

    checkEvenOdd(num);
    return 0;
}
void checkEvenOdd(int n)
{
    if(n%2 == 0)
    {
        printf("\n%d is Even.",n);
    }
    else{
        printf("\n%d is Odd.",n);
    }
    return 0;
}
