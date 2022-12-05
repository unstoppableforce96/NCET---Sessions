#include <stdio.h>
int main()
{
	int eng, mat, phy, che, cs;
	scanf("%d%d%d%d%d", &eng, &mat, &phy, &che, &cs); // 65 24 34 46 18
	if (eng < 35) 
	{
		printf("Failed in eng\n");
	}
	if (mat < 35) 
	{
		printf("Failed in mat\n");
	}
	if (phy < 35) 
	{
		printf("Failed in phy\n");
	}
	if (che < 35) 
	{
		printf("Failed in che\n");
	}
	if (cs < 35)
	{
		printf("Failed in CS\n");
	}
}