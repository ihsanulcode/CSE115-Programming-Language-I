#include<stdio.h>
void check();
int main(void)
{
    check();
    return 0;
}
void check()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);

    if(ch>=48 && ch<=57)
    {
        printf("\nDigit!");
    }
    else if(ch>=65 && ch<=90)
    {
        printf("\nUpper case letter!");
    }
    else if(ch>=97 && ch<=122)
    {
        printf("\nLower case letter!");
    }
    else
        printf("Special character!");
    return 0;
}
