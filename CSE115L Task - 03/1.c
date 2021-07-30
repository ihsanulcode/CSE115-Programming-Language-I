#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n>0){
        printf("%d is positive",n);
    }
    else if(n<0){
        printf("%d is negative",n);
    }

    return 0;
}
