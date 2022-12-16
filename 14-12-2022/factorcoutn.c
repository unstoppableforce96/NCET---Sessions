#include <stdio.h>
int main()
{
	int n, f_cnt = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0) f_cnt++;
	}
	printf("%d", f_cnt);
}