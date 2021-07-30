#include<stdio.h>
int checkprime(int);
int main(void)
{
    int lowerlimit,upperlimit;
    printf("Enter the lower and upper limit to list primes: ");
    scanf("%d%d",&lowerlimit,&upperlimit);

    printf("All the prime numbers between %d and %d are: \n",lowerlimit,upperlimit);

    while(lowerlimit <= upperlimit)
    {
        if(checkprime(lowerlimit))
        {
            printf("%d ",lowerlimit);
        }
        lowerlimit++;
    }

}
int checkprime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
