#include <stdio.h>
/*
   * The main function, Entry point
   */int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (!(i % 3) && (i % 5))
		{
			printf("Fizz");
		}
		else if (!(i % 5) && (i % 3))
		{
			printf("Buzz");
		}
		else if (!(i % 3) && !(i % 5))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		putchar(32);
	}
	putchar(10);
	return (0);
}
