#include <stdio.h>
int main(void)
{
    int A[5];
    int B[5];

    int row;
    for(row=0;row<5;row++)
    {
        printf("Input elements for A[%d]: ",row);
        scanf("%d",&A[row]);
    }
    printf("\n");

    for(row=0;row<5;row++)
    {
        printf("Input elements for B[%d]: ",row);
        scanf("%d",&B[row]);
    }


    for (row=0;row<5;row++) {

                if (A[row] == B[row]) {

                        printf("STRICTLY identical.\n");

                }
                else {
                        printf("NOT IDENTICAL\n");
                }
        }

}
