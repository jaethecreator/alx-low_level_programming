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

	printf("Size of a int is: %lu", (unsigned long)sizeof(a));
	printf("Size of a long int is: %lu", (unsigned long)sizeof(b));
	printf("Size of a char is: %lu", (unsigned long)sizeof(c));
	printf("Size of a float is: %lu", (unsigned long)sizeof(d));
	return (0);
}
