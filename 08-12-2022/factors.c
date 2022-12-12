#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d", &n);
	int fc = 0;
	for (int i = 1; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			fc+=2;
		}
	}
	printf("%d", fc);
}