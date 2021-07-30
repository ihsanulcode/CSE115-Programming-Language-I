#include<stdio.h>
int main()
{
    int size1;
    printf("Enter the size for 1st array: ");
    scanf("%d",&size1);

    int array1[size1];
    printf("Insert 1st array elements:\n");
    for(int i=0;i<size1;i++){
        printf("[%d]: ",i);
        scanf("%d",&array1[i]);
    }

    int size2;
    printf("Enter the size for 2nd array: ");
    scanf("%d",&size2);

    int array2[size2];
    printf("Insert 2nd array elements:\n");
    for(int i=0;i<size2;i++){
        printf("[%d]: ",i);
        scanf("%d",&array2[i]);
    }

    //merge
    int merge[size1+size2];
    for(int i=0;i<size1;i++){
        merge[i]=array1[i];
    }
    for(int i=0;i<size2;i++){
        merge[size1+i]=array2[i];
    }

    //printing
    printf("\nMerged array: ");
    for(int i=0;i<size1+size2;i++){
        printf("%d ",merge[i]);
    }

    //sorted array
    int temp;
    for(int i=0;i<size1+size2;i++){
        for(int j=i+1;j<size1+size2;j++){
            if(merge[i]<merge[j]){
                temp=merge[i];
                merge[i]=merge[j];
                merge[j]=temp;
            }
        }
    }

    //descending printing
    printf("\ndescending order: ");
    for(int i=0;i<size1+size2;i++){
        printf("%d ",merge[i]);
    }

    return 0;

}
