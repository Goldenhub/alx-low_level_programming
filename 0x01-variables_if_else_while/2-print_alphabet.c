#include <stdio.h>
/**
  * main - Entry point
  * Description: prints the alphabets in lowercase
  * Return: 0
  */
int main(void)
{
	int i;

	i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
