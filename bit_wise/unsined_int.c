#include <stdio.h>

int main(void)
{

    unsigned int x = 0x21436587;
    unsigned int y = 0;

    y = y | (x & 0xf0000000) >> 4;
     printf("number =0x%X\nafter Reversal = 0x%X\n", x, y); 
    y = y | (x & 0x0f000000) << 4;
     printf("number =0x%X\nafter Reversal = 0x%X\n", x, y);
    
    y = y | (x & 0x00f00000) >> 4;
     printf("number =0x%X\nafter Reversal = 0x%X\n", x, y);
    y = y | (x & 0x000f0000) << 4;
     printf("number =0x%X\nafter Reversal = 0x%X\n", x, y);

    y = y | (x & 0x0000f000) >> 4;
    printf("number =0x%X\nafter Reversal = 0x%X\n", x, y);
    y = y | (x & 0x00000f00) << 4;
     printf("number =0x%X\nafter Reversal = 0x%X\n", x, y);

    y = y | (x & 0x000000f0) >> 4;
     printf("number =0x%X\nafter Reversal = 0x%X\n", x, y);
    y = y | (x & 0x0000000f) << 4;
    printf("number =0x%X\nafter Reversal = 0x%X\n", x, y);

    printf("number =0x%X\nafter Reversal = 0x%X\n", x, y);



    return 0;
}