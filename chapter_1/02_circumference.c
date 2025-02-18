/*
    Program 2 | Find the area and circumference of a circle with radius r
Algorithm:
Step 1: Start
Step 2: Read the radius of circle (r)
Step 3: Circumference cir = 2*22/7*r
Step 4: Area area = 22/7*r*r
Step 5: Print circumference and area
Step 6: Stop

*/

#include <stdio.h>

int main(void)
{

    float f_r = 0;
    float f_cir = 0;
    float f_area = 0;
    printf("Enter the Radius of circle =");
    scanf("%f", &f_r);

    f_cir = 2 * 22.0 / 7.0 * f_r;
    f_area = 22.0 / 7.0 * f_r * f_r;

    printf("Circumference = %6.3f\tArea = %6.3f\n",f_cir, f_area);


    return(0);
}