#include <stdio.h>
/**
  * main - Entry point
  * Description: prints the alphabets in lowercase
  * except q and e
  * Return: 0
  */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if (i != 113 || i != 101)
		{
			putchar(i);
			i++;
		}
	}
	putchar('\n');
	return (0);
}
