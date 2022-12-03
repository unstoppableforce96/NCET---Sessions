// profit and loss
// print profit loss
// profit profit amount profit percentage
// loss loss amount loss percentage
// result of a fin transaction
#include <stdio.h>
int main()
{
	int cp, sp;
	scanf("%d%d", &cp, &sp); // 100 100
	if (cp > sp) // 100 > 100
	{
		printf("Loss\n");
		int la = cp - sp;
		float lp = (float)la / cp * 100;
		printf("Loss amount: %d\n", la);
		printf("Loss Percentage: %.2f\n", lp);
	}
	else if (sp > cp)
	{
		printf("Profit\n");
		int pa = sp - cp;
		float pp = (float)pa / cp * 100;
		printf("Profit amount: %d\n", pa);
		printf("Profit percentage: %.2f\n", pp);
	}
	else
	{
		printf("No loss no profit");
	}
}