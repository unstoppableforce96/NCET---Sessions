// LCM of two numbers (the worst way, but the one that works)
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int i = 1;
	while (1)
	{
		if (i % a == 0 && i % b == 0)
		{
			printf("%d", i);
			break;
		}
		i++;
	}
}
