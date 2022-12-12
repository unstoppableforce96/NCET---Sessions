// Prime or not
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
	if (fc == 2)
	{
		printf("%d is Prime", n);
	}
	else
	{
		printf("%d is not Prime", n);
	}
}