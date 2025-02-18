/* Convert the temperature given in Fahrenheit to Celsius

Algorithm:
Step 1: Start
Step 2: Read the temperature given in Fahrenheit (f)
Step 3: Temperature in Celsius (c) = 5/9*(f−32)
Step 4: Print temperature in Celsius
Step 5: Stop


 */
#include <stdio.h>

int main(void)
{
    float f,c;

    printf("Enter The temperature in fahrenheit = ");
    scanf("%f",&f);

    c = ((5.0/9.0) * (f - 32));

    printf("Temperature in Celsius = %6.3f", c); 

    return(0);

}