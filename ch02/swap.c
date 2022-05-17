#include <stdio.h>

void swap1(int x, int y);
void swap2(int *x, int *y);

int main(void)
{
	int a = 10;
	int b = 20;

	swap2(&a, &b);

	printf("a: %i - b: %i\n", a, b);

	return 0;
}

void swap1(int x, int y)
{
	int tmp;
	tmp = x; x = y; y = tmp;
}

void swap2(int *x, int *y)
{
	int tmp;
	tmp = *x; *x = *y; *y = tmp;
}
