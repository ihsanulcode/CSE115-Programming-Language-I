#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);

    int a[n];
    int *ptr = &a;

    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter element at a[%d]: ",i);
        scanf("%d",(ptr+i));
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }
    printf("\n");
}
