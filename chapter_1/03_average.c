/*
Program 3 | Find the average of three numbers
Algorithm:
Step 1: Start
Step 2: Read numbers no1, no2, no3
Step 3: Average avg = (no1+no2+no3)/3
Step 4: Print avg
Step 5: Stop

*/

#include<stdio.h>

int main(void)
{
    int i_No_1;
    int i_No_2;
    int i_No_3;

    float f_Avg;

    printf("Enter The Numbers =");
    scanf("%d %d %d",&i_No_1, &i_No_2, &i_No_3);

    f_Avg = (i_No_1 + i_No_2 + i_No_3) / 3.0 ;

    printf("Average = %6.3f", f_Avg);
    
    return(0);
}