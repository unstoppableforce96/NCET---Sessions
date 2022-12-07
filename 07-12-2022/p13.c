#include <stdio.h>
int main()
{
	int i, m, n, r;
	scanf("%d%d%d", &m, &n, &r);
	for (i = m; i <= n; i+=r) // init, conditino, updastion
	{
		printf("%d ", i); 
	}
}