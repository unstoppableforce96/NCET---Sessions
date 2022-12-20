#include <stdio.h>
int factor_count(int n) // n = 10
{
	int fc = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			fc++;
		}
	}
	return fc; // 4
}

int main()
{
	int a, b; // a = 10, b = 20
	scanf("%d%d", &a, &b);
	for (int i = a; i <= b; i++) // i = 10
	{
		printf("%d --> %d\n", i, factor_count(i)); // 4;
	}
			
}