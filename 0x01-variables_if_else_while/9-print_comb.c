#include <stdio.h>
/**
  * main - Entry Point
  * Description: program that prints all possible
  * combinations of single-digit numbers
  * Return: 0
  */
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		if (i !== 57)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
