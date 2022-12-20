#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int pp, np;
	pp = n;
	while (1)
	{
		int fc = 0;
		for (int i = 1; i <= pp; i++)
		{
			if (pp % i == 0)
			{
				fc++;
			}
		}
		if (fc == 2)
		{
			break;
		}
		pp--;
	}
//	printf("%d", pp);
	
	np = n;
	while (1)
	{
		int fc = 0;
		for (int i = 1; i <= np; i++)
		{
			if (np % i == 0)
			{
				fc++;
			}
		}
		if (fc == 2)
		{
			break;
		}
		np++;
	}
//	printf("\n%d", np);
	
	// nearest prime
	if (np - n < n - pp) printf("%d", np);
	else if (np - n >= n - pp) printf("%d", pp);
}
	