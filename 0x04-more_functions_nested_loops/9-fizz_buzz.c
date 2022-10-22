#include <stdio.h>

/**
*main - program that prints either number
*or fizz or buzz or fizzBuzz
*
*
*Return: returns 0
*/

int main(void)
{
	int n;

	printf("1");
	for (n = 2; n <= 100; n++)
	{
		printf(" ");
		if ((n % 3 == 0))
		{
			printf("Fizz");
		}
		if ((n % 5) == 0)
		{
			printf("Buzz");
		}
		if (n % 3 != 0 && n % 5 != 0)
		{
			printf("%d ", n);
		}
	}
	printf("\n");

	return (0);
}
