#include <stdio.h>
int main()
{
	int n, r, is_duck_number = 0;
	scanf("%d", &n);
	while (n > 0)
	{
		r = n % 10;
		if (r == 0)
		{
			printf("Duck Number");
			is_duck_number = 1;
			break;
		}
		n = n / 10;
	}
	if (is_duck_number == 0)
	{
		printf("Not a duck number");
	}
}