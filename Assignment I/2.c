#include<stdio.h>
int main(void)
{
    int second;
    printf("Enter your time: ");
    scanf("%d",&second);

    int hour = second/3600;
    int min  = (second%3600)/60;
    int sec  = (second%3600)%60;

    printf("\nHours   : %d",hour);
    printf("\nMinutes : %d",min);
    printf("\nSeconds : %d",sec);

    return 0;

}
