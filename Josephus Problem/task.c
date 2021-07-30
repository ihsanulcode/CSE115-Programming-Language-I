#include<stdio.h>
int position(int n, int k)
{
    if (n == 1)
        return 1;
    else
        return (position(n - 1, k) + k - 1) % n + 1;
}

int main(void)
{
    int testcase,n,k;
    scanf("%d",&testcase);

    printf("\n");
    for(int i=1;i<=testcase;i++){

        scanf("%d%d",&n,&k);

        int josephus = position(n,k);
        printf("Case %d: %d",i,josephus);
        printf("\n\n");
    }

    return 0;
}

