// generic pointer or void pointer
// void pointer is pointer with the capability to point to any type of data
// int --> int
// float -->  float
// char --> char
// void --> int, float, char
// in order to get the value that is present in the location pointer by a void pointer, we must typecast to appropriate type
#include <stdio.h>
int main() {
	int a = 10;
	float f = 13.2;
	char ch = 'z';
	
	int *iptr = &a;
	float *fptr = &f;
	char *cptr = &ch;
	
	printf("%d %d %d\n", iptr, fptr, cptr);
	printf("%d %.2f %c\n", *iptr, *fptr, *cptr);
	void *iptr1, *fptr1, *cptr1;
	iptr1 = &a;
	fptr1 = &f;
	cptr1 = &ch;
	
	printf("%d %d %d\n", iptr1, fptr1, cptr1);
	printf("%d %.2f %c\n", *(int*)iptr1, *(float*)fptr1, *(char*)cptr1);
}

// malloc --> return type --> void pointer
// int *ptr = (int*)malloc(n*sizeof(int))