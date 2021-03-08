#include<stdio.h>

int main (void)
{
    int num;

    printf("Enter your number: ");
    scanf("%d", &num);

    if(num >= 93){
        printf("Grade is \'A\'");
    }
    else if(num >= 90 && num <= 92){
        printf("Grade is \'A-\'");
    }
    else if(num >= 87 && num <= 89){
        printf("Grade is \'B+\'");
    }
    else if(num >= 83 && num <= 86){
        printf("Grade is \'B(Good)\'");
    }
    else if(num >= 80 && num <= 82){
        printf("Grade is \'B-\'");
    }
    else if(num >= 77 && num <= 79){
        printf("Grade is \'C+\'");
    }
    else if(num >= 73 && num <= 76){
        printf("Grade is \'C(Average)\'");
    }
    else if(num >= 70 && num <= 72){
        printf("Grade is \'C-\'");
    }
    else if(num >= 67 && num <= 69){
        printf("Grade is \'D+\'");
    }
    else if(num >= 60 && num <= 66){
        printf("Grade is \'D(poor)\'");
    }
    else{
        printf("Fail!");
    }

    return 0;


}
