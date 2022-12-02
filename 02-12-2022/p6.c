// Determine the result of a financial transaction
// profit or loss
#include <stdio.h>
int main()
{
	int cp, sp;
	scanf("%d%d", &cp, &sp);
	if (cp > sp) 
	{
		printf("Loss");
	}
	else 
	{
		printf("Profit");
	}
}