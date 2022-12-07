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
	int a = 12, b = 3;
	if (is_factor(a, b)) // 1 or 0
	{
		printf("YES");
	}
	else 
	{
		printf("NO");
	}

	
}