#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap1(int x, int y); // incorrect swap function
void swap2(int *x, int *y); // correct swap function
int swap3(void *x, void *y, int size); // using void pointers

int main(void)
{
	int a = 10;
	int b = 20;

	swap3(&a, &b, sizeof(int));
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

int swap3(void *x, void *y, int size)
{
	void *tmp;

	if ((tmp = malloc(size)) == NULL)
		return -1;

	memcpy(tmp, x, size); memcpy(x, y, size); memcpy(y, tmp, size);
	free(tmp);

	return 0;
}
