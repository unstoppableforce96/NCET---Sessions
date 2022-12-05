#include <stdio.h>
int main()
{
	int a = 10, b = 20;
	int c = a++ + b++; // 10+20 = 30, a = 11, b = 21
	int d = ++a + ++b; // 12+22 = 34
	printf("%d %d", c, d);
}