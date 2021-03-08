#include<stdio.h>
void dosum(int *a, int *b, int size)
{
    int sum[size],i;

    for(i=0;i<size;i++)
        sum[i] = (*a+i) + (*b+i);

     printf("\nSUM:\n");
    for(i=0;i<size;i++)
    printf("%d ",sum[i]);

    return 0;

}
int main(void)
{
    int size;
    printf("Enter array size: ");
    scanf("%d",&size);

    int a[size];
    int b[size];

    int *ptr1,*ptr2;
    ptr1 = a;
    ptr2 = b;

    int i;
    for(i=0;i<size;i++)
    {
        printf("\nEnter element at a[%d]: ",i);
        scanf("%d",&a[i]);
    }


    for(i=0;i<size;i++)
    {
        printf("\nEnter element at b[%d]: ",i);
        scanf("%d",&b[i]);
    }

    printf("\nArray 1:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);

    }


     printf("\nArray 2:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",b[i]);

    }

    dosum(ptr1,ptr2, size);

    return 0;


}
