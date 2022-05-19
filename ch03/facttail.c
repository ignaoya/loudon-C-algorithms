#include <stdio.h>

int facttail(int n, int a);

int main(void)
{
	int x = 4;

	printf("%i\n", facttail(x, 1));
}

int facttail(int n, int a)
{
	if (n < 0)
		return 0;
	else if (n == 0)
		return 1;
	else if (n == 1)
		return a;
	else
		return facttail(n - 1, n * a);
}
