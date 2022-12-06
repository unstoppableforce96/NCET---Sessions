#include <stdio.h>
int main()
{
	long long a, b;
	scanf("%lld%lld", &a, &b);
	long long c = a + b; // 2147483647
	printf("%lld", c);
}