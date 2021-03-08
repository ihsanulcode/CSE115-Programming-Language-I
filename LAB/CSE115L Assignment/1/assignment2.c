//Write a program that reads in 3 numbers and prints their average.

#include <stdio.h>

int main (void)
{
    int num1,num2,num3,average;

    printf("Insert first number: ");
    scanf("%d",&num1);

    printf("Insert second number: ");
    scanf("%d",&num2);

    printf("Insert third number: ");
    scanf("%d",&num3);

    average = (num1+num2+num3)/3;
    printf("\nThe average is: %d",average);

    return 0;

}

