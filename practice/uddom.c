#include<stdio.h>
float info_calculate(int n);
int main(void)
{
    int number;

    printf("Enter the number of employee: ");
    scanf("%d",&number);


    int info_employee;



    info_employee = info_calculate(number);

}
float info_calculate(int n)
{
    int count = 0;
    char name[20];
    int hours;
    double rate,pay;
    double total_pay = 0.0;

    while(count < n)
    {
        printf("\n\t***Information of employee %d***",count+1);
        printf("\n\nNAME: ");
        scanf("%s",name);
        printf("Working Days: ");
        scanf("%d",&hours);
        printf("Rate: ");
        scanf("%lf",&rate);
        pay = hours * rate;
        printf("\nPayment is %.2lf TAKA",pay);
        total_pay += pay;
        count ++;
    }

    printf ("\n\nAll employees processed.\n");
    printf("\n\t\tSir! Your total payment is BDT %.2lf",total_pay);
    printf("\n\n\t\tThank You!");
    printf("\n\t\tUDDOM ACADEMIC CARE");
    return 0;


}
