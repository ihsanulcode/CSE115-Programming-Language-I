#include<stdio.h>
int main(void)
{
    int temp = 6;
    for(int row=6;row>=1;row--){
        for(int col=1;col<=row;col++){
            printf("%d",temp);
        }
        printf("\n");
        temp--;

    }

    return 0;
}

