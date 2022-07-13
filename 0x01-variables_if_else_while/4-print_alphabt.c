#include <stdio.h>

/**
 *
 *
 */

int main(void)

{
	char as, E, Q;

	as = 'a';
	E = 'e';
	Q = 'q';

	do {
		if (as != E && as != Q)
		putchar(as);
		as++;
		putchar('\n');
	}
	while (as <= 'z');
		
	return (0);
}
