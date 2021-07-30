#include<stdio.h>
int computeAverage(int a,int b)
{
    return (a+b)/2;
}
int main()
{
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);

    int avg = computeAverage(a,b);
    printf("Average is: %d",avg);
    return 0;
}
