#include <stdio.h>
void is_factor(int a, int b) // a = 12, b = 7
{
	if (a % b == 0) // 5 == 0
	{
		printf("YES\n");
	}
	else 
	{
		printf("NO\n");
	}
}

int main()
{
	int a = 12, b = 7;
	is_factor(a, b); // is_factor(12, 7)
	int x = 15, y = 3;
	is_factor(x, y);
	int p = 25, q = 6;
	is_factor(p, q);
	
}