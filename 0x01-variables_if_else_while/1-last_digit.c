#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - Entry point
  * Description: Prints the last digit of a random
  * integer and telss if it's greater than 5, a zero,
  * less than 6 and not 0
  * Return: 0
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n%10);
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n%10);
	}
	else
	{
		printf("Last digit os %d is %d and is less than 6 and not 0\n", n, n%10);
	}

	return (0);
}
