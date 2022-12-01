// Find the differences between numbers
// 10 20 --> 10
// 20 10 --> 10

#include <stdio.h>
#include <math.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	// Find out the difference between a and b
	printf("%d", abs(a - b));
}