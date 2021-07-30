#include<stdio.h>
int main()
{
    int arr[5];

    printf("Enter array elements:\n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    printf("Reverse order: ");
    for(int j=4;j>=0;j--){
        printf("%d ",arr[j]);
    }
}
