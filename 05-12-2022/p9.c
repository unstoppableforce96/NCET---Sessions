#include <stdio.h>
int main()
{
	int a = 0;
	if (a++) // post-increment
	{
		printf("YES");
	}
	else 
	{
		printf("NO");
	}
//	printf("%d", a);
}