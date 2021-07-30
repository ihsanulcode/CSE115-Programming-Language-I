#include<stdio.h>
int main(void)
{
    int a,b;
    int *ptr1 = &a,*ptr2 = &b;

    printf("Enter 2 number: \n");
    scanf("%d%d",&a,&b);

    if(*ptr1>*ptr2)
    {
        printf("MAX: %d",*ptr1);
    }
    else
        printf("MAX: %d",*ptr2);
}
