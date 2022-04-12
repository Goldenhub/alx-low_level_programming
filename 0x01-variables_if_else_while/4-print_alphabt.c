#include <stdio.h>
/**
  * main - Entry point
  * Description: prints the alphabets in lowercase
  * except q and e
  * Return: 0
  */
int main(void)
{
	int i;

	char g = 'g';
	char e = 'e';

	i = 97;

	while (i <= 122)
	{
		if (i == (int)g || i == (int)e)
		{
			continue;
		}
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
