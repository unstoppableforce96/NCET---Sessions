#include <stdio.h>
int main()
{
	long long a, b, i = 1, m;
	scanf("%lld%lld", &a, &b);
	if (a < b)
	{
		long long t = a;
		a = b;
		b = t;
	}
	while (1)
	{
		m = a * i;
		if (m % b == 0)
		{
			printf("%lld", m);
			break;
		}
		i++;
	}
}