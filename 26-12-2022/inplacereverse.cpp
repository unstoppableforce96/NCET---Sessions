#include <stdio.h>
int main()
{
	int arr[6] = {10, 20, 30, 40, 50, 60};
	int n = 6;
	for (int i = 0, j = n - 1; i < j; i++, j--)
	{
		int t = arr[i];
		arr[i] = arr[j];
		arr[j] = t;
	}
	
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}