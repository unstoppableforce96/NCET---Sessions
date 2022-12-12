#include <stdio.h>
int main()
{
	int n, r;
	scanf("%d", &n);
	while (n > 0) // 1234
	{
		r = n % 10;
		printf("%d\n", r);
		n = n / 10; // n /= 10
	}
}
		