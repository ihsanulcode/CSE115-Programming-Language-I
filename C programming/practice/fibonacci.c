#include<stdio.h>
int main()
{
   int i,n;
   int a = 0;
   int b = 1;
   int c;

   printf("Input n: ");
   scanf("%d",&n);

   for(i=1;i<=n;i++)
   {
       printf("%d ",a);
       c = a+b;
       a = b;
       b = c;

   }
   return 0;
}
