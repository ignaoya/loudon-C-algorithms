#include <stdio.h>

int fact(int n);

int main(void)
{
	int n = 4;
	printf("%i\n", fact(n));
}

int fact(int n)
{
	if (n < 0)
		return 0;
	else if (n == 0)
		return 1;
	else
		return n * fact(n - 1);
}
