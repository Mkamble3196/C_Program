#include <stdio.h>

void print_pattern(int i_num);

int main(void)
{
    int i_num = 0;
    int i_n = 0;

    do{
    printf("Enter a number (1 to 10):-");
    scanf("%d", &i_num);
    }while(i_num < 1 || i_num > 10);

    i_n = (i_num % 2 == 0) ? i_num - 1 : i_num; // for Symmetrical Pattern Formation need clear mid point hence we consider as a odd value 

    printf("Input Number is %d\n", i_num);
    printf("Loop Number is %d\n\n", i_n);

    print_pattern(i_n);

    return(0);
}

void print_pattern(int i_num)
{
    int i_spaces = 0;
    int i_mid = (i_num / 2) + 1; // calculate middle position
    /*
    
    */

    for(int i = 1; i <= i_num; ++i)
    {
        i_spaces = (i < i_mid) ? (i - 1) * 2 :(i_num - i) * 2; // calculate the number of spaces first and second half

        for(int s = 0; s < i_spaces; ++s)
            printf(" "); 

        for(int j = 0; j < (i_num - i_spaces); ++j)
        {
            printf("%d ", i); 
        }
        printf("\n");

    }
}