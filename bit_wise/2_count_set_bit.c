#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    unsigned int i_count = 0;
    unsigned int i_Num = 0;

    printf("Number Enter:-");
    scanf("%d", &i_Num);

    for(int i = i_Num; i ; i >>= 1)
    {
        i_count += i & 1;

    }
    printf("Total Number of set bit in %d = %d\n", i_Num, i_count);
    
    return(0);
}