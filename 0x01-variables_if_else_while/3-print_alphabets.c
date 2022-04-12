#include <stdio.h>
/**
  * main - Entry point
  * Description: prints the alphabets in lowercase
  * then uppercase
  * Return: 0
  */
int main(void)
{
	int i, n;

	i = 97;
	n = 65;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}

	while (n <= 90)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
