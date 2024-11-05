#include <stdio.h>

/**
  * Print Fahrenheit-Celsius table 
  * for fahr = 0, 20, ..., 300; floating point version
  */

int main(void)
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;  /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;  /* step size */
    

    printf("\nTemperature Conversion Program\n\n");

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    
    return(0);
}
