#include <stdio.h>
#define CHAR_BIT    8


int main(void)
{
    unsigned int v = 0; // input bits to be reversed
    
    printf("Enter the Number:- ");
    scanf("%u", &v);
    unsigned int r = v; // r wil be reversed bits of v; first get LSB of v
    
    printf("\nbefore\n");
    for(int i = 31; i >=0 ; i--)
    {
        printf("%d", ((r >> i )& 1));
    }
    int s = sizeof(v) * CHAR_BIT - 1; // extra shift needed at end

    
    for(v >>= 1; v; v >>= 1)
    {
        r <<= 1;
        r |= v & 1;
        s--;
    }

    r <<= s;

    printf("\nAfter\n");
    for(int i = 31; i >=0 ; i--)
    {
        printf("%d", ((r >> i )& 1));
    }

    return(0);
}