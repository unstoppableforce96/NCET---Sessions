#include <stdio.h>
int is_prime(int n) {
	int fc = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			fc++;
		}
	}
	if (fc == 2) return 1;
	else return 0;
}

int main()
{
	for (int i = 1; i <= 100; i++) {
		if (is_prime(i) == 1)
		{
			printf("%d ", i);
		}
	}
}
	