#include <stdio.h>
int main() {
	FILE *fp = fopen("input.txt", "r");
	int n;
	fscanf(fp, "%d\n", &n);
	int arr[n];
	printf("%d\n", n);
	for (int i = 0; i < n; i++) {
		fscanf(fp, "%d", &arr[i]);
	}
	
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
//		printf("%d ", arr[i]);
	}
	
	printf("\n%lld", sum);
}