#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter array elements:\n");

    for(int i=0;i<n;i++){
        printf("[%d]: ",i);
        scanf("%d",&arr[i]);
    }

    int index,element;
    printf("Enter index: ");
    scanf("%d",&index);
    printf("Enter element: ");
    scanf("%d",&element);

    //replacing
    for(int i=0;i<n;i++){
        if(i==index){
            arr[index]=element;
        }
    }

    //printing
    printf("Replaced Array: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;

}
