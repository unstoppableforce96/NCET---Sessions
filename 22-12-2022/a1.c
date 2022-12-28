#include <stdio.h>
int main()
{
	int arr[10];
	char str[20]; // char takes 1 byte --> 20 * 1 --> 20 bytes;
	float farr[5]; 
	long long larr[3];
	printf("%d bytes\n", sizeof(arr));
	printf("%d bytes\n", sizeof(str));
	printf("%d bytes\n", sizeof(farr));
	printf("%d bytes\n", sizeof(larr));
}