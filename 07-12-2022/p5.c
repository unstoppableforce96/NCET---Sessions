#include <stdio.h>
void add(int a, int b)
{
	printf("%d", a + b);
}

int ADD(int a, int b)
{
	return a + b;
}

int main() 
{
//	add(10, 20);
	printf("%d", ADD(10, 20));
}