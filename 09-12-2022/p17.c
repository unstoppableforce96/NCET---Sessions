// Spy Number or not
#include <stdio.h>
int main()
{
	int n, r, sum = 0, prod = 1;
	scanf("%d", &n);
	int t = n;
	while (n > 0)
	{
		r = n % 10;
		sum += r;
		prod *= r;
		n = n / 10;
	}
	if (sum == prod)
	{
		printf("%d is Spy Number", t);
	}
	else
	{
		printf("%d Not a Spy Number", t);
	}
}