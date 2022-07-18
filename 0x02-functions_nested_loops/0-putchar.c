#include <stdio.h>
#include <unistd.h>

/**
 *
 * main - Entry point
 *
 * Return: 0 on success
 */

int main()
{

	char word[8] = "_putchar";

		int i;
		
		i = 0;
			while (i < 8)
			{ putchar(word[i]);
				i++;
			}
			putchar('\n');
	return (0);
}
