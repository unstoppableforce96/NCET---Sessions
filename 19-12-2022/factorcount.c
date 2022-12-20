#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	for (int n = a; n <= b; n++)
	{
		int factor_count = 0;
		for (int i = 1; i <= n; i++) {
			if (n % i == 0) {
				factor_count++;
			}
		}
		printf("%d %d\n", n, factor_count);
	}
}