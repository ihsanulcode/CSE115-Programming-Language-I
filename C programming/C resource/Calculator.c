#include<stdio.h>

int main()
{


   double num1,num2;
   char sign;

   printf("Enter a number: ");
   scanf("%lf", &num1);
   printf("Enter sign: ");
   scanf(" %c", &sign);
   printf("Enter another number: ");
   scanf("%lf", &num2);

   if(sign == '+'){
      printf("%f", num1 + num2);
   } else if (sign == '-'){
       printf("%f", num1 - num2);
   } else if (sign == '*'){
       printf("%f", num1 * num2);
   }else if (sign == '/'){
       printf("%f", num1 / num2);
   }else {
       printf("Invalid sign");
   }




    return 0;
}
