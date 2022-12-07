#include <stdio.h>
int is_factor(int a, int b) // a = 12, b = 7
{
	if (a % b == 0) // 5 == 0
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

int main()
{
	int a = 12, b = 7;
	printf("%d\n", is_factor(a, b));
	int x = 15, y = 3;
	printf("%d\n", is_factor(x, y));
	int p = 25, q = 6;
	printf("%d", is_factor(p, q));
	
}