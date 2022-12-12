// Dealing with digits of a number
#include <stdio.h>
int main()
{
	int n, r;
	scanf("%d", &n); // 1234
	while (n > 0)
	{
		r = n % 10;
		printf("%d\n", r * r);
		n = n / 10;
	}
}