//Assuming that bit number start from 1 write a C program to set a particular bit in a Given Number


#include <stdio.h>
int main(void)
{

    int iNo;
    int iSet_bit_position;
    int iTemp;

    printf("Enter the Number = ");
    scanf("%d",&iNo);

    printf("Enter the Positionto be set = ");
    scanf("%d",&iSet_bit_position);

    iTemp = iNo | (1 << iSet_bit_position - 1);

    printf("Number is %d and after shift by position %d number is =%d", iNo, iSet_bit_position, iTemp);
    
    return(0);
}