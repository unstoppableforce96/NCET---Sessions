#include <stdio.h>
#include <math.h>
int main()
{
	int n, f_cnt = 0;
	scanf("%d", &n);
	int s = sqrt(n);
	for (int i = 1; i <= s; i++)
	{
		if (n % i == 0) {
			if (i == n / i) f_cnt++;
			else f_cnt += 2;
		}
	}
//	if (s * s == n) f_cnt--;
	printf("%d", f_cnt);
}