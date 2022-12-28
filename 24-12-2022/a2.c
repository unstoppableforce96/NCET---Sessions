#include <stdio.h>
void update(int n) // n = 10
{
	n++; // 11
	printf("Address of n: %d\n", &n);
}

int main()
{
	int a = 10;
	update(a);// Function call by value
	printf("Address of a: %d", &a);
}