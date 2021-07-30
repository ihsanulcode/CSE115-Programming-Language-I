#include<stdio.h>
int main(void)
{
    int row,col,n;
    printf("Enter number of rows: ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

