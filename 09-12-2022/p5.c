#include <stdio.h>
int main()
{
	int i = 1;
	while (1)
	{
		printf("%d ", i);
		if (i == 10) 
		{
			break;
		}
		i++;
	}
}