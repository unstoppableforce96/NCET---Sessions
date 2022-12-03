// result of a fin transaction
#include <stdio.h>
int main()
{
	int cp, sp;
	scanf("%d%d", &cp, &sp); // 100 100
	if (cp == sp) // 100 > 100
	{
		printf("No loss no profit");
	}
	else if (cp < sp)
	{
		printf("Profit");
	}
	else
	{
		printf("Loss");
	}
}