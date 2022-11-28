#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	int la, lb, lc;
	la = a % 10;
	lb = b % 10;
	lc = c % 10;
	printf("%d", la + lb + lc);
}