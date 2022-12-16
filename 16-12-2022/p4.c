#include <stdio.h>
int main()
{
	for (int n = 10; n <= 20; n++) // n = 11
	{
		int fc = 0;
		for (int i = 1; i <= n; i++) // i = 1; i <= 11; 1 11 --> 2
		{
			if (n % i == 0) fc++;
		}
		if (fc == 2) printf("%d is a prime\n", n); // 2 == 2
		else printf("%d is not a prime\n", n);
	}
}