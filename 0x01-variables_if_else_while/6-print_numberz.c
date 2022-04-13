#include <stdio.h>
/**
  * main - Entry Point
  * Description: prints all single digit numbers
  * of base 10 starting from 0, followed by a new line
  * Return: 0
  */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
