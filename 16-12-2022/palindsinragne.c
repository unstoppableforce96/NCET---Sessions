// palindromes in a range
#include <stdio.h>
int main()
{
	int start, stop;
	scanf("%d%d", &start, &stop);
	for (int i = start; i <= stop; i++)
	{
		int t = i;
		int rev = 0, r;
		while (t > 0)
		{
			r = t % 10;
			rev = rev * 10 + r;
			t = t / 10;
		}
		if (rev == i) printf("%d ", i);
	}
}