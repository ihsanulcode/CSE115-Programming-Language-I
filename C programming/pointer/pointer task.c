#include<stdio.h>
int main()
{
   int n;
   int i,sum=0;
   int *ptr;

   printf("Size of array: ");
   scanf("%d",&n);

   int arr[n];


   for(i=0;i<n;i++)
   {
       printf("\nEnter array elements[%d]: ",i);
       scanf("%d",&arr[i]);
   }


   ptr = arr;

   for(i=0;i<n;i++)
   {

      sum = sum + *ptr;
      ptr++;
   }

   printf("\nThe sum is: %d",sum);
   return 0;
}
