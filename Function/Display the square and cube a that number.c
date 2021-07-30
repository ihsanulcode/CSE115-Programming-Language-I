#include<stdio.h>
int getNum();
int getSquare(int);
int getCube(int);
int main(void)
{
    int number;
    number = getNum();
    int square;
    square = getSquare(number);
    int cube;
    cube = getCube(number);
    printf("The square of the number is: %d\n",square);
    printf("The cube of the number is: %d\n",cube);
    return 0;
}
int getNum()
{
    int number;
    printf("Enter a integer number: ");
    scanf("%d",&number);
    return number;
}
int getSquare(int n)
{
    return(n*n);
}
int getCube(int n)
{
    return(n*n*n);
}
