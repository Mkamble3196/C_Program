#include <stdio.h>

int main(void)
{
    int i_num = 0;
    int i_pos = 0;
    int i = 0;
    int j = 0;
    int m ,n ;

    printf("Enter the Number:-");
    scanf("%d", &i_num);

    printf("Before Reverse:-");
    for(i_pos = 31; i_pos >= 0 ; i_pos--)
    {
        printf("%d", i_num >> i_pos & 1);
    }

    //Reverse logic

    for(i = 0, j = 31; i < j; i++, j--)
    {
        m = i_num >> i & 1;
        n = i_num >> j & 1; // extract bit 

        if(m != n) // if it is different we need to toggle for reverse order.
        {
            i_num = i_num ^ 1 << i;
            i_num = i_num ^ 1 << j;
        }

    }


    printf("\nAFTER Reverse:-");
    for(i_pos = 31; i_pos >= 0 ; i_pos--)
        printf("%d", i_num >> i_pos & 1);

    return(0);
}