#include <stdio.h>
int main() {
	int n = 12345;
	int *ptr1 = &n; // valid
	char *ptr2 = &n; // invalid
//	printf("%d %d", ptr1, ptr2);
	printf("%d %d", *ptr1, *ptr2);
}