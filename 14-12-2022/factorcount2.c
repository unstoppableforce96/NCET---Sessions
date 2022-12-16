#include <stdio.h>
int main()
{
	int n, f_cnt = 1;
	scanf("%d", &n);
	for (int i = 1; i <= n/2; i++)
	{
		if (n % i == 0) f_cnt++;
	}
	printf("%d", f_cnt);
}