#include<stdio.h>
void listNumbersAsc(int start,int end)
{
    printf("Ascending order: ");
    for(int i=start;i<=end;i++){
        printf("%d ",i);
    }
}
int main()
{
    int n1,n2;
    printf("Start: ");
    scanf("%d",&n1);
    printf("End: ");
    scanf("%d",&n2);

    listNumbersAsc(n1,n2);
    return 0;
}
