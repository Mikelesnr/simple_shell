#include <stdio.h>

/**
*main - entry point
*function prints fizz for all n%3=0;buzz for all n%5=0 and fizzbuzz for n%3=0 & n%5=0
*return 0
*/

int main(void)
{
	int i, n;

	printf("Enter the number :");
	scanf("%d", &n);
	for (i = 1; i <= n ; i++)
	{
		if (i % 15 == 0)
			printf ("FizzBuzz\t");
		else if ((i % 3) == 0)
			printf("Fizz\t");
		else if ((i % 5) == 0)
			printf("Buzz\t");
		else
			printf("%d\t", i);
	}
	return (0);
}
