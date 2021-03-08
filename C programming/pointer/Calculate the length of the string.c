#include<stdio.h>

int stringLengthUsingPointer(char*);

int main() {
   char str[100];
   int len;

   printf("\nEnter string : ");
   gets(str);

   len = stringLengthUsingPointer(str);
   printf("The length of the string %s is : %d", str, len);
   return 0;
}

int stringLengthUsingPointer(char*p) /* p=&str[0] */
{
   int count = 0;
   while (*p != '\0') {
      count++;
      p++;
   }
   return count;
}
