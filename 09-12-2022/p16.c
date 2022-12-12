// Find out the digit_sum of the given number
// 789 --> eds = 8, ods = 16
#include <stdio.h>
int main()
{
	int n, r, eds = 0, ods = 0;
	scanf("%d", &n); // 1234
	while (n > 0)
	{
		r = n % 10; // r = 1
		if (r % 2 == 0)
		{
			eds += r;
		}
		else
		{
			ods += r;
		}
		n = n / 10;
	}
	printf("%d %d", eds, ods);
}