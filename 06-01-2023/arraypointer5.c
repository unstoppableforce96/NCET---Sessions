// arr name itself acts as a pointer. but you can not assign some other address to the arr name.
#include <stdio.h>
int main() {
	int arr[5] = {10, 20, 30, 40, 50};
	int *p = arr;
	p++;
	printf("%d", *p);
}