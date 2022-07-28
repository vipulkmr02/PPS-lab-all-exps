#include <stdio.h>

int fib(int t)
{
	if (t <= 1)
		return t;

	return fib(t - 1) + fib(t - 2);
}

int main()
{
	int terms;
	printf("Terms: ");
	scanf("%d", &terms);
	int temp = terms;
	while (terms > 0)
	{
		printf("%d ", fib(temp - terms));
		terms--;
	}
	printf("\n");
	return 0;
}
	
