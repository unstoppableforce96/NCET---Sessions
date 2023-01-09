#include <stdio.h>
int main() {
	int a = 15;
	printf("%d\n", &a);
	int *ptr;
	ptr = &a;
	printf("%d", ptr);
}