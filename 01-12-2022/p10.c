#include <stdio.h>
#include <math.h>
int main()
{
	int n = 10;
	int m = -10;
	int a = abs(n); // abs(10) --> 10
	int b = abs(m); // abs(-10) --> 10
	printf("%d %d", a, b);
}