#include<stdio.h>
int fibonacci(int n)
{
   int a = 0;
   int b = 1;
   int c;
   for(int i=1;i<=n;i++)
   {
       if(i==n)
            return a;

       c = a+b;
       a = b;
       b = c;
   }
}
int main()
{
    int n;
    printf("Enter nth: ");
    scanf("%d",&n);

    int nth = fibonacci(n);
    printf("%dth Fibonacci number is %d.\n",n,nth);
    return 0;
}
