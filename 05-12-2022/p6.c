#include <stdio.h>
int main()
{
	int a = 3, b = 4, c = 5;
	a += b; // a = 7, b = 4, c = 5
	b += c; // a = 7, b = 9, c = 5
	c += a; // a = 7, b = 9, c = 12
	a *= c; // a = 84, b = 9, c = 12
	c *= b; // a = 84, b = 9, c = 108
	c -= b; // a = 84, b = 9, c = 99
	printf("%d %d %d", b, a, c); // 9, 84, 99
}