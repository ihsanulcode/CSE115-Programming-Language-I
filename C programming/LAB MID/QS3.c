#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int a[n];
    int i;

    printf("Enter elements: \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);


    for(i=1;i<n-1;i++)
    {
        if(a[i]-a[i+1] != a[0]-a[1] )
            printf("NO");
        else
            printf("YES");

    }


}
