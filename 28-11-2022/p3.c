#include <stdio.h>
int main() 
{
	int a, b, c;
	scanf("%d", &a); // scanf("%d%d", &a, &b);
	scanf("%d", &b);
	c = a + b;
	printf("Sum of %d and %d is: %d", a, b, c);
}