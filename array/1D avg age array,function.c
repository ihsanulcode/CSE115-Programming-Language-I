#include<stdio.h>
float average(float age[],int n);
int main(void)
{
    int n;
    printf("Enter the number of people: ");
    scanf("%d",&n);

    float age[n];
    float avg;
    avg = average(age,n);
    printf("Average age: %0.2f",avg);
    return 0;
}
float average(float age[],int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("Age %d: ",i+1);
        scanf("%f",&age[i]);
    }

    float sum = 0.0;
    float avg;

    for(i=0;i<n;i++)
    {
        sum += age[i];
    }
    avg = (sum/n);
    return avg;
}
