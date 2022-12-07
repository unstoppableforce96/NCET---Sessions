#include <stdio.h>
int main()
{
	int i, n, q, r;
	scanf("%d%d%d", &n, &q, &r);
	for (i = q; i <= r; i++)
	{
		printf("%d x %d = %d\n", n, i, n * i);
	}
}