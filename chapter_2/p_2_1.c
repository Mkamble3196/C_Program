// Find one's and two's complement of a number


#include <stdio.h>

int main(void)
{

    int iNo;
    int iOc;
    int iTc;


    printf("Enter the Number = ");
    scanf("%d",&iNo);

    iOc = ~iNo;
    iTc = iOc + 1;
    printf("One's complement of Number %d = %d\nTwo complement's of the number %d = %d\n", iNo, iOc, iNo, iTc);
    
    return(0);
}