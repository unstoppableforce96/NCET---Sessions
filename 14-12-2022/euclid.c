// Euclid's Algo
#include <stdio.h>
int main()
{
	long long a, b;
	scanf("%lld%lld", &a, &b);
	while (a != b)
	{
		if (a > b) a -= b;
		else b -= a;
		printf("%d %d\n", a, b);
	}
	printf("%lld", b);
}