// Dealing with digits of a number
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n); // 1234
	while (n > 0)
	{
		printf("%d\n", n % 10);
		n = n / 10;
	}
}