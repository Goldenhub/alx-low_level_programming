#include <stdio.h>
/**
  * main - Entry Point
  * Description: prints the lowercase alphabet in
  * reverse, followed by a new line
  * Return: 0
  */
int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
