#include <stdio.h>
int main() {
	int arr[5] = {10, 20, 30, 40, 50};
	int *p;
	for (p = arr; p < arr + 5; p++) {
		printf("%d ", *p);
	}
}