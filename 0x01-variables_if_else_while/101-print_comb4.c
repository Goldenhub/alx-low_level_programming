#include <stdio.h>
/**
  * main - Entry point
  * Description:  program that prints all possible
  * different combinations of three digits
  * Return: 0
  */
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		int j = i + 1;

		while (j <= 57)
		{
			int k = j + 1;
			while (k <= 57)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55)
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
