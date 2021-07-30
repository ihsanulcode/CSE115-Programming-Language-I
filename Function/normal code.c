//Write a program that take an integer input from user and write a function  that checks the following conditions: 
//● If the number is divisible by both 2 and 3 : Print “Divisible by both” 
//● If the number is divisible by either 2 or 3 : Print “Divisible by 2 or 3” 
//● If none of the above conditions is true, print “Not divisible by 2 or 3” 

#include<stdio.h>
void check();
int main(void)
{
    check();
    return 0;

}
void check()
{
    int number;
    printf("Enter an integer number: ");
    scanf("%d",&number);

    if(number%2 == 0 && number%3 == 0)
    {
        printf("Divisible by both");
    }
    else if(number%2 == 0 || number%3 == 0)
    {
        printf("Divisible by 2 or 3");
    }
    else{
        printf("Not divisible by 2 or 3");
    }
    return 0;
}


