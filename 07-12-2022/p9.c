#include <stdio.h>
int main()
{
	int i = 1; // 1 2 3 4 ... 10
	while (i <= 10) // i <= 10 --> 11 <= 10
	{
		printf("%d ", i); // 1 2 3 .. 10
		i++; // i = 1 --> 2 --> 3 --> 4 --> .. --> 11
	}
	printf("\nThe value of i %d", i);
}