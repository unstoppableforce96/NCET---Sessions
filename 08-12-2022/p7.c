// Conditionals inside the loop
// Print all the even number in a given range
// 2 20
// 2 4 6 8 10 12 14 16 18 20
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	for (int i = a; i <= b; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d ", i);
		}
	}
}