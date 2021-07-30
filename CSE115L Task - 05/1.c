#include<stdio.h>
int main(void)
{
    printf("All the even numbers between 0 and 100:\n");
    for(int i=1;i<=100;i++){
        if(i%2 == 0){
            printf("%d ",i);
        }
    }

    return 0;
}
