#include<stdio.h>
int main(void)
{
    int row,col,n;

    printf("Enter size: ");
    scanf("%d",&n);

    for(row=n;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;

}

