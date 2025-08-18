/* Assuming that bit numbering starts from 1. Write a C program to set a particular bit in a given number
1. start
2. Read Number
3. Read bit to be set
4. set the bit using num | 1 << (bit - 1)
5. print result
*/

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int i_Number = 0;
    int i_Set_bit = 0;
    int ret = 0;

    printf("Enter the Number:-");
    scanf("%d", &i_Number);
    printf("Enter the bit to be set:-");
    scanf("%d", &i_Set_bit);

    ret = i_Number | (1 << (i_Set_bit - 1));

    printf("Before set number is =%d\nAfter set number is = %d\n", i_Number, ret);

    printf("\nBefore\n");
    for(int i = 31; i >=0 ; i--)
    {
        printf("%d", ((i_Number >> i )& 1));
    }

    printf("\nAfter\n");
    for(int i = 31; i >=0 ; i--)
    {
        printf("%d", ((ret >> i )& 1));
    }

    return(0);
}