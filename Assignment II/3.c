#include<stdio.h>
int main(void)
{
    int a,x;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of x: ");
    scanf("%d",&x);

    int sum = 1;
    for(int i=1;i<=x;i++){
        sum *= a;
    }
    printf("Answer: %d",sum);

    return 0;
}
