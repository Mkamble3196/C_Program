/*
Program 5 | Find area of a triangle whose sides are a, b and c
Algorithm:
Step 1: Start
Step 2: Read sides a, b and c of triangle
Step 3: s = (a+b+c)/2
Step 4: area = sqrt(s*(s−a)*(s−b)*(s−c))
Step 5: Print area
Step 6: Stop
PE 1-5.c
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int i_No_1;
    int i_No_2;
    int i_No_3;

    float f_area, s;

    printf("Enter The triangle Size =");
    scanf("%d %d %d",&i_No_1, &i_No_2, &i_No_3);
    
    s = (i_No_1 + i_No_2 + i_No_3) / 2.0 ;
    f_area = sqrt(s * ( s - i_No_1) * (s - i_No_2) * (s - i_No_3));

    printf("Area = %6.3f\n", f_area);


    return(0);
}