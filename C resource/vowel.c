#include<stdio.h>

int main (void)
{
   char c;

   printf("Enter a character: ");
   scanf("%c",&c);

   if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
   {
       printf("%c is a vowel.\n",c);
   }
   else
   {
    printf("%c is not a vowel.\n",c);

   }

    return 0;
}
