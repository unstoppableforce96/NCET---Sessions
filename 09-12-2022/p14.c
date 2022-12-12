// Number of digits in the given number
#include <stdio.h>
int main()
{
	int n, r;
	int digit_count = 0;
	scanf("%d", &n); // 1234
	while (n > 0) // 0 > 0
	{
		digit_count++;
		n = n / 10; // 1234 / 10 --> 123 / 10 --> 12 / 10 --> 1 / 10 --> 0
	}
	printf("%d", digit_count);
}