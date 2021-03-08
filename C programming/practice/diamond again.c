#include<stdio.h>
int main(void)
{
    int row;
    int col;
    int n;


    printf("Enter number of rows: ");
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
        for(col=row-1;col>=1;col--)
        {
            printf("*");
        }
        printf("\n");
    }

    for(row=n-1;row>=1;row--)
    {
        for(col=1;col<=n-row;col++)
        {
            printf(" ");
        }
        for(col=1;col<=row;col++)
        {
            printf("*");
        }
        for(col=row-1;col>=1;col--)
        {
            printf("*");
        }
        printf("\n");
    }
}
