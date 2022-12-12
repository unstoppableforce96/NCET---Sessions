// Sum of first n natural numbers
#include <stdio.h>
int main()
{
	int n, sum = 0;
	scanf("%d", &n);
	for (int i = n; i >= 1; i--) {
		sum += i;
	}
	printf("%d", sum);
}