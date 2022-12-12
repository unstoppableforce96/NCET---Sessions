// Sum of first n natural numbers
#include <stdio.h>
int main()
{
	int n, fact = 1;
	scanf("%d", &n);
	for (int i = n; i >= 1; i--) {
		fact *= i;
	}
	printf("%d", fact);
}