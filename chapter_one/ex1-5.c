#include <stdio.h>

/**
  * Print Fahrenheit-Celsius table 
  * in reverse order
  * that is from 300 degrees to 0
  */

int main(void)
{
    int fahr;

    /* Display Heading*/
    printf("\nTemperature Conversion\n\n");
    printf("Farenheit Celsius\n");
    printf("_________ ______\n");

    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
    {
        printf("%6d %9.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }

    return(0);
}