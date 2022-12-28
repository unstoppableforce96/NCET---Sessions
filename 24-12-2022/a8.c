#include <stdio.h>
int main()
{
	int a[5] = {10, 20, 30, 40, 50};
	printf("%d %d %d", a, a + 1, a + 2); // 6684160 + 1 * 4 --> 6684164
}