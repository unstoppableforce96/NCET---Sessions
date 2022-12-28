#include <stdio.h>
void print_array(int a[], int size)
{
	for (int i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	// printing the array
	print_array(arr, n);	
}