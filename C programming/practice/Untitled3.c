#include<stdio.h>

int main(void)
{
    int n,i,flag=0;

    printf("Enter an integer number: ");
    scanf("%d",&n);


    for(i=2;i<n;i++)

    {
        if(n%i==0)
        {
            flag = 1;
            break;
        }
    }
    if( n == 1)
    {
        printf("1 is not Prime!");
    }
    else if(flag == 0)
    {
        printf("Prime!");
    }
    else
    {
        printf("NOT Prime!");
    }





}
