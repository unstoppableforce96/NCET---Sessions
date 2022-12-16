#include <stdio.h>
int main()
{
	int start, stop, spy_number_count = 0;
	scanf("%d%d", &start, &stop);
	for (int i = start; i <= stop; i++)
	{
		int digit_sum = 0, digit_pro = 1, r, t = i;
		while (t > 0)
		{
			r = t % 10;
			digit_sum += r;
			digit_pro *= r;
			t = t / 10;
		}
		if (digit_sum == digit_pro) spy_number_count++;
	}
	printf("%d", spy_number_count);
}