#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter array elements:\n");

    for(int i=0;i<n;i++){
        printf("[%d]: ",i);
        scanf("%d",&arr[i]);
    }

    //printing even
    printf("Even numbers: ");
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            printf("%d ",arr[i]);
        }
    }

    //printing odd
    printf("\nOdd numbers: ");
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            printf("%d ",arr[i]);
        }
    }

    return 0;
}
