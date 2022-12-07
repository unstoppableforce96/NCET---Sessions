#include <stdio.h>
int main()
{
	int i, m, n;
	scanf("%d%d", &m, &n);
	for (i = m; i <= n; i+=2) // init, conditino, updastion
	{
		printf("%d ", i); 
	}
}