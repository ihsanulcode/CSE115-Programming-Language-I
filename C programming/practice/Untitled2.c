#include<stdio.h>

int main(void)
{
    int n,count=0;
    double h,r,pay,total_pay;

    printf("Enter total employ: ");
    scanf("%d",&n);
    while(count < n)
    {
        printf("\nInformation of Employee %d:\n",count+1);
        printf("\nHours: \n");
        scanf("%lf",&h);
        printf("\nRate: \n");
        scanf("%lf",&r);
        pay = h*r;
        printf("Pay is $%.2lf",pay);
        total_pay += pay;
        count += 1;
    }
    printf("All Employee proceed!");
    printf("Total payment $%.2lf",total_pay);
    return 0;
}
