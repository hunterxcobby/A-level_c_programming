#include <stdio.h>

/**
 * A program that copies its input to its output,
 * replacing each tab by \t ,each backspace by '\b'
 * and each backslash by \\
 */

int main(void)
{
    int c;
    int fl = '\\';
    int tb = 't';
    int bs = 'b';
    int bsh = '\\';

    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            putchar(fl);
            putchar(tb);
        }
        else if (c == '\b')
        {
            putchar(fl);
            putchar(bs);
        }
        else if (c == '\\')
        {
            putchar(fl);
            putchar(bsh);
        }
        else
        {
            putchar(c);
        }
    }

    return (0);
}
