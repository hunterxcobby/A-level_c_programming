#include <stdio.h>

/**
  * Print Celsius-Farenheit table 
  * for fahr = 0, 20, ..., 300; floating point version
  */

int main(void)
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;  /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;  /* step size */
    

    /* Display Heading*/
    printf("\nTemperature Conversion\n\n");
    printf("Celcius\tFarenheit\n");
    printf("_______\t________\n");

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%5.1f\t%3.0f\n", celsius, fahr);
        fahr = fahr + step;
    }

    return(0);
}