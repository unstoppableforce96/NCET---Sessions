#include <stdio.h>
int main()
{
//	for (init; condition; updation) // all these things are omittable
	int i = 1; // init
	for (;i <= 10;) 
	{
		printf("%d ", i);
		i++;
	}
}