#include <stdio.h>
int main()
{
	for (int i = 1; i <= 10 ; i++) {
		if (i == 5) // i == 5 --> 6 == 5
		{
			continue;
		}
		printf("%d ", i); // 1 2 3 4 6 7 8 9 10
	}
}