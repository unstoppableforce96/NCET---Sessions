#include <stdio.h>
int main()
{
	int a, b;
	int x = 1;
	scanf("%d%d", &a, &b);
	for (int i = 0; i < b; i++) {
		x *= a;
	}
	printf("%d", x);
}