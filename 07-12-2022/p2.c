#include <stdio.h>
void add(int a, int b)
{
	printf("%d", a + b);
}

int main() 
{
	// 1st invalid function call
	// the one with wrong name
//	add(10, 20); // valid
//	Add(10, 20); // invalid
	// 2nd invalid function call
	// call the function without sufficient arguments
//	add(10); // invalid 
//	add(10, 20, 30);
}