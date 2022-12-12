#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int t;
	if (n > 0) t = n;
	else t = -n;
	int rev = 0, r;
	while (t > 0)
	{
		r = t % 10;
		rev = rev * 10 + r;
		t = t / 10;
	}
	if (n > 0) printf("%d", rev);
	else printf("%d", -rev);
	
}