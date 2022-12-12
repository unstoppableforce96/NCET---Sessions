// Find out the digit_sum of the given number
// 789 --> 24
#include <stdio.h>
int main()
{
	int n, r, sum = 0;
	scanf("%d", &n); // 1234
	while (n > 0)
	{
		r = n % 10; // r = 1
		sum += r;
		n = n / 10;
	}
	printf("%d", sum);
}