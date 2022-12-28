#include <stdio.h>
void print_array(int* a, int size)
{
	for (int i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
}

void read_array(int* a, int size)
{
	for (int i = 0; i < size; i++) {
		scanf("%d", &a[i]);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	//read array
	read_array(arr, n);
	// printing the array
	print_array(arr, n);	
}