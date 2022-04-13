#include <stdio.h>
/**
  * main - Entry Point
  * Description: prints all the numbers of base 16
  * in lowercase, followed by a new line
  * Return: 0
  */
int main(void)
{
	int i = 0;

	char letter = 'a';

	while (i < 10)
	{
		putchar(i);
		i++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
