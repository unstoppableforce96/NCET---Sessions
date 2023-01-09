#include <stdio.h>
int main() {
	int a = 123456;
	int *ptr1 = &a; // declare and initializd a pointer
	char *ch = &a; // declaring a character pointer and init with an integer address
	printf("%d %d", *ptr1, *ch);
}