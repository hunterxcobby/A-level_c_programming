#include <stdio.h>

/**
 * count newlines, tabs and blanks
 */

int main(void)
{
    int c, nl, bl, tb;

    nl = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n' )
        {
            ++nl;
        }
        else if (c == ' ')
        {
            ++bl;
        }
        else if (c == '\t')
        {
            ++tb;
        }

    printf("\n%dnewlines\n %d blanks \n %d tabs\n", nl, bl, tb);
    } 
    
    return (0);
}
