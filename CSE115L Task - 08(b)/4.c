#include<stdio.h>
void printStarPyramid(int lines)
{
    for(int row=1;row<=lines;row++)
    {
        for(int col=1;col<=lines-row;col++)
        {
            printf(" ");
        }
        for(int col=1;col<=row;col++)
        {
            printf("*");
        }
        for(int col=row-1;col>=1;col--)
        {
            printf("*");
        }
        printf("\n");
    }

}
int main()
{
    int n;
    printf("Enter the number of lines in the pyramid: ");
    scanf("%d",&n);

    printStarPyramid(n);
    return 0;
}
