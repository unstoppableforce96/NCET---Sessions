#include <stdio.h>
int is_self_dividing(int n)
{
	int t = n;
	while (t > 0)
	{
		int r = t % 10;
		if (r == 0 || n % r != 0) return 0;
		t = t / 10;
	}
	return 1;
}

int main()
{
	int start, stop;
	scanf("%d%d", &start, &stop);
	for (int i = start; i <= stop; i++)
	{
		if (is_self_dividing(i) == 1)
			printf("%d ", i);
	}
}