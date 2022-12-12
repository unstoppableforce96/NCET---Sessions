#include <stdio.h>
int main()
{
	int i = 1;
	while (i <= 10) // 5 <= 10
	{
		if (i == 5) // i == 5 --> 5 == 5
		{
			i++;
			continue;
		}
		printf("%d ", i); // 1 2 3 4
		i++; // i = 4
	}
}