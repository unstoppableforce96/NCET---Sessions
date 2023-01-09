#include <stdio.h>
int main() {
	int arr[5] = {10, 20, 30, 40, 50};
	printf("%d %d", *arr, arr[0]); // arr name itself acts as pointer and it points the base address of first element in  the array
	printf("\n%d %d", *(arr + 1), arr[1]);
}