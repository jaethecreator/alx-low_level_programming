#include <stdio.h>

/**
 * main - size of intergers
 * Return: 0 on success
 */
int main(void)
{
	int a;
	long int b;
	char c;
	float d;
	long long int e;

	printf("Size of a char: %lu.\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu.\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu.\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %lu.\n", (unsigned long)sizeof(e));
	printf("Size of a float: %lu.\n", (unsigned long)sizeof(d));
	return (0);
}
