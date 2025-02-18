#include <stdio.h>

int main(void){

    float f_Interest = 0;
    float f_amt = 0;
    float f_principle = 0;
    float f_time = 0;
    float f_rate = 0;

    printf("Enter the Principle = ");
    scanf("%f", &f_principle);

    printf("\nEnter the Rate of interest = ");
    scanf("%f", &f_rate);

    printf("\nEnter the Time = ");
    scanf("%f", &f_time);

    f_Interest = f_principle * f_rate * f_time /100;

    f_amt = f_principle + f_Interest;

    printf("Interest = %6.2f\n", f_Interest);
    printf("Amount is %6.2f\n", f_amt);



    return(0);
}