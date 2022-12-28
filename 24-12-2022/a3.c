#include <stdio.h>
void update(int* n) // n = 10
{
	(*n)++;
}

int main()
{
	int a = 10;
	update(&a);// Function call by value
	printf("%d", a);
}