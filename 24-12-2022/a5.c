// arr name itself acts a pointer
#include <stdio.h>
int main()
{
	int arr[5] = {10, 20, 30, 40, 50};
	printf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
}