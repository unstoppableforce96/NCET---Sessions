#include <stdio.h>
int is_prime(int n)
{
	int fc = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) fc++;
	}
	return fc == 2;
}

int are_all_digits_prime(int n)
{
	while (n > 0)
	{
		int r = n % 10;
		if (is_prime(r) == 0) return 0;
		n = n / 10;
	}
	return 1;
}

int main()
{
	int n;
	scanf("%d", &n);
	if (is_prime(n) && are_all_digits_prime(n)) printf("Mega Prime");
	else printf("Not Mega Prime");
	
}