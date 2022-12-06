#include <stdio.h>
// function definition
void add(int a, int b) // a = 10, b = 20 // function with parameters and without returntype
{
	printf("%d\n", a + b); // 30
}

int main()
{
	add(10, 20); // function call
	add(100, 200);
	add(300, 400);
	add(500, 600);
}