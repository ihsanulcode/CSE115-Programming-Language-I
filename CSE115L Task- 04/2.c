#include<stdio.h>
int main(void)
{
    int year,remainder;
    printf("Enter a Year: ");
    scanf("%d",&year);

    remainder = ((year%4==0) && ((year%400==0)||(year%100!=0)));

    switch(remainder)
     {

     case 1:
         printf("%d is a Leap Year.",year);
         break;

     case 0:
         printf("%d is not a Leap Year.",year);
         break;

     default:
         printf("\nInvalid input!\nTry again");
         break;

     }

     return 0;
}
