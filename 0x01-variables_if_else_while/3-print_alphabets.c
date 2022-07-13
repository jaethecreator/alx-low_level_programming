#include <stdio.h>

/**
 * main - Entry point
 *
 * return 0 on success
 */

int main()
{
	char alp = 'a';
	char al = 'A';

	while (alp <= 'z')
	{
		putchar(alp);
			alp++;
	
	}
	while (al <= 'Z')
	{
		putchar(al);
		al++;
	}
	putchar('\n');
	return (0);

}
