#include <stdio.h>
int main() {
	int n;
	int *ptr;
	ptr = &n;
	scanf("%d", ptr);
	int arr[n];
	int *p;
	for (p = arr; p < arr + n; p++) { // 1000
		scanf("%d", p);
	}
	
	int sum = 0;
	for  (p = arr; p < arr + n; p++) {
		sum += *p;
	}
	printf("%d", sum);
}