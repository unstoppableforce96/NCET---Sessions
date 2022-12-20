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
	int n;
	scanf("%d", &n);
	int pp, np;
	pp = n;
	while (1)
	{
		if (is_prime(pp) == 1) break;
		pp--;
	}
	printf("%d", pp);
	
	np = n;
	while (1)
	{
		if (is_prime(np) == 1) break;
		np++;
	}
	printf(" %d", np);
	
}
	