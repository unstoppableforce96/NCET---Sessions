// Extended Euclid's Algo
#include <stdio.h>
int main()
{
	long long a, b;
	scanf("%lld%lld", &a, &b);
	while (a != 0 && b != 0)
	{
		if (a > b) a %= b;
		else b %= a;
		printf("%lld %lld\n", a, b);
	}
	if (a == 0) printf("%lld", b);
	else printf("%lld", a);
}