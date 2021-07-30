#include<stdio.h>
void checkLeapYear (int);

int main(void)
{
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);

    checkLeapYear(year);
    return 0;

}
void checkLeapYear(int y)
{
    if(y%400 == 0 || y%4 == 0 && y%100 != 0){
        printf("\nLeap Year.");
    }
    else{
        printf("Not Leap Year.");
    }
    return 0;
}
