#include<stdio.h>

int main(void)
{
    int row,col,n;

    printf("Enter n: ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
        {
            printf(" ");
        }
        for(col=1;col<=row;col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
