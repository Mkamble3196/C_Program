/*
    Write a  C program to multiply a given number with 2^n, without using a multiplication operator. The Value of n will be 
    entered by the user

    1. start
    2. read the number
    3. input the value n 
    4. to multiply number with 2^n,shifts the bits of number in left direction n times i.e res = num << n
    5. print number
    6. stop
*/

#include <stdio.h>
#include <stdlib.h>

int multiply(int i_Number, int i_n)
{
    return (i_Number << i_n);
}

int main(void)
{
    int i_Number = 0;
    int i_n = 0;
    int i_Result = 0;
    printf("Enter the to be multiply:-");
    scanf("%d",&i_Number);
    printf("Enter the Value of 2^n:-");
    scanf("%d", &i_n);

    printf("\nresult:\t%d\n", multiply(i_Number, i_n));


    return(0);
}