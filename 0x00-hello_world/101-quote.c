#include<stdio.h>

/**
  * main - Entry point
  * Description: Prints a string to the standard error
  * Return: 1
  */

int main()
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 58);
	return (1);
}