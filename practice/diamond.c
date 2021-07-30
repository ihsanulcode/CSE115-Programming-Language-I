//DIAMOND

#include <stdio.h>

int main()
{
    int row,col,n,s=1;

    printf("Enter values for n: ");
    scanf("%d",&n);
    s=n-1;

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=s;col++)
        {
            printf(" ");
        }
        s--;
        for(col=1;col<=2*row-1;col++)
        {
            printf("*");
        }
        printf("\n");
    }
    s=1;

    for(row=1;row<=n-1;row++)
    {
        for(col=1;col<=s;col++)
        {
            printf(" ");
        }
        s++;
        for(col=1;col<=2*(n-row)-1;col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


