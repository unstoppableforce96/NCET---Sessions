#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b); // 1000000007 1000000007
	while (a != b)
	{
		if (a > b)
		{
			a -= b;
		}
		else
		{
			b -= a;
		}
	}
	printf("%d", a);
}
	