/*
    Find Sum of digit in a given positive Number
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    size_t Num;
    size_t Sum = 0;
    size_t temp = 0;

    printf("Enter The Number:");
    scanf("%zd", &Num);

    size_t digit = Num;
    while(digit != 0)
    {
        temp = digit % 10;
        Sum = Sum + temp;
        digit = digit / 10;
    }

    printf("Number is %zd\nsum of digit %zd", Num, Sum);

    return(0);
}