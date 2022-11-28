#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	// Arithmetic Operations
	printf("Sum of %d and %d is: %d\n", a, b, a + b);
	printf("Differece b/w %d and %d is: %d\n", a, b, a - b);
	printf("Product of %d and %d is: %d\n", a, b, a * b);
	printf("Quotient when %d is divided by %d is: %d\n", a, b, a / b);
	printf("Remainder when %d is divided by %d is: %d", a, b, a % b);
}