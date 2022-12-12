// Factor sum
#include <stdio.h>
int main()
{
	int n, f_sum = 0; // fc --> factor count
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) // i is a factor of n
		{
			f_sum += i;
		}
	}
	printf("%d", f_sum);
}