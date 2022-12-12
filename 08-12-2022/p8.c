// Factors of a given number n;
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) // i is a factor of n
		{
			printf("%d ", i);
		}
	}
}