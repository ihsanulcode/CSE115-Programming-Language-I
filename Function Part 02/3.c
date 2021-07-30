#include<stdio.h>
void listNumbersDesc(int start,int end)
{
    printf("Descending order: ");
    for(int i=end;i>=start;i--){
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

    listNumbersDesc(n1,n2);
    return 0;
}

