#include<stdio.h>

int main(void)
{
    int n;
    printf("Enter Array size: ");
    scanf("%d",&n);

    int arr[n];
    int i;

    for(i=0;i<n;i++)
    {
        printf("Enter element for arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    return 0;

}
