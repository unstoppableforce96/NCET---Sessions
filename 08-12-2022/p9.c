// Factors of a given number n;
#include <stdio.h>
int main()
{
	int n, fc = 0; // fc --> factor count
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) // i is a factor of n
		{
			fc++;
		}
	}
	printf("%d", fc);
}