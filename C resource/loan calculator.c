#include <stdio.h>

int main()
{

   double loan_amount, interest_rate, years, total_amount, monthly_amount;

     printf("Enter the loan amount: ");
     scanf("%lf", &loan_amount);
     printf("Enter the interest rate: ");
     scanf("%lf", &interest_rate);
     printf("Number of years: ");
     scanf("%lf", &years);

     total_amount = loan_amount + loan_amount * interest_rate/100;
     monthly_amount = total_amount / (years * 12);

     printf("Total amount: %lf\n", total_amount);
     printf("Monthly amount: %lf\n", monthly_amount);






    return 0;
}
