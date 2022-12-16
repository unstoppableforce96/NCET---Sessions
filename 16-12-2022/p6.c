// primes in a range
#include <stdio.h>
int main()
{
	int start, stop;
	scanf("%d%d", &start, &stop);
	for (int n = start; n <= stop; n++) // n = 11
	{
		int fc = 0;
		for (int i = 1; i <= n; i++) // i = 1; i <= 11; 1 11 --> 2
		{
			if (n % i == 0) fc++;
		}
		if (fc == 2) printf("%d ", n);
	}
}