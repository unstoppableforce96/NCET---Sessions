#include <stdio.h>
int main()
{
	int a = 1, b = 2;
	float c = a * 1.0 / b; // 1 / 2 --> 0.0
	printf("%.2f", c);
}