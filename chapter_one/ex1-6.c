#include <stdio.h>

/* Verify that the expression getchar() != EOF is 0 or 1 */

int main(void)
{
	int c;

	if (c = getchar() != EOF)
	{
		putchar(c);
		printf("%d\n", c); /* C is one when displayed with printf*/
	}

	return (0);
}
