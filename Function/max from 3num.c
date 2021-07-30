#include<stdio.h>
int maximum(int, int, int);
int main(void)
{
    int a;
    int b;
    int c;
    int max;

    printf("Enter three number: \n");
    scanf("%d%d%d",&a,&b,&c);

    max = maximum(a,b,c);
    printf("Max number is: %d",max);
    return 0;
}
int maximum(int a,int b,int c)
{
    if(a>=b && a>=c)
    {
        return a;
    }
    else if(b>=a && b>=c)
    {
        return b;
    }
    else{
        return c;
    }
}
