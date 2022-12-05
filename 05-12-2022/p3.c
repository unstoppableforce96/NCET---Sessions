#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a > b && a > c)
	{
		printf("a (%d) is the largest", a);
	}
	else if(b > a && b > c)
	{
		printf("b (%d) is the largest", b);
	}
	else
	{
		printf("c (%d) is the largest", c);
	}
}