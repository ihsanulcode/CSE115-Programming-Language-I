#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);

    int mainarr[n],copyarray[n];
    printf("Enter array elements:\n");

    for(int i=0;i<n;i++){
        printf("[%d]: ",i);
        scanf("%d",&mainarr[i]);
    }

    for(int i=0;i<n;i++){
        copyarray[n-i-1]=mainarr[i];
    }

    //printing arrays
    printf("\nOriginal Array: ");
    for(int i=0;i<n;i++){
        printf("%d ",mainarr[i]);
    }
    printf("\nCopied Array: ");
    for(int i=0;i<n;i++){
        printf("%d ",copyarray[i]);
    }

    return 0;
}

