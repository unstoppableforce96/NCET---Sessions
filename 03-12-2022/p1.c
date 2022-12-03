// result of a fin transaction
#include <stdio.h>
int main()
{
	int cp, sp;
	scanf("%d%d", &cp, &sp); // 100 100
	if (cp > sp) // 100 > 100
	{
		printf("Loss");
	}
	else if (sp > cp)
	{
		printf("Profit");
	}
	else
	{
		printf("No loss no profit");
	}
}