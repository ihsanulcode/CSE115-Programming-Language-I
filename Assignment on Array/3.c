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

    for(int i = 0; i < n; i++)
    for(int j = i+1; j < n; ++j)
      if(arr[i] == arr[j])
        printf("Find %d at index %d  %d\n",arr[i],i,j);

    return 0;
}

