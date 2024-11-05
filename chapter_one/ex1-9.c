#include <stdio.h>

/**
 * A program that copies its input to its output,
 * replacing each string of one or more blanks
 * by a single blank.
 */

int main(void)
{
    int c;
    int bl = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (bl == 0)
            {
                putchar(c);
                bl = 1;
            }
        }
        else
        {
            putchar(c);
            bl = 0;
        }
    }

    return (0);
}
