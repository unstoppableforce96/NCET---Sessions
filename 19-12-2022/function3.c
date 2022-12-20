#include <stdio.h>
void printNumbersInRange(int start, int stop)
{
	for (int i = start; i <= stop; i++)
	{
		printf("%d ", i);
	}
}

int main()
{
	int p = 10, q = 20;
	printNumbersInRange(p, q);
	printf("\n");
	
	int d = 100, e = 400;
	printNumbersInRange(d, e);
	printf("\n");
	
	int x = 1000, y = 2345;
	printNumbersInRange(x, y);
}