// pointer to pointer
#include <stdio.h>
int main() {
	int a = 11;
	int *ptr = &a;
//	printf("%d", *ptr);
	int **ptrptr = &ptr;
	printf("%d\n", ptrptr); // Adress  of ptr
	printf("%d\n", *ptrptr); // value of ptr (value of ptr is nothing but base address of integer variable a)
	printf("%d", **ptrptr); // value of a
}