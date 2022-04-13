#include <stdio.h>
/**
  * main - Entry Point
  * Description: prints all the numbers of base 16
  * in lowercase, followed by a new line
  * Return: 0
  */
int main(void)
{
	int i = 48;

	char letter = 'a';

	while (i < 58)
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
