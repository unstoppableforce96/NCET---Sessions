// strncpy() --> 
#include <stdio.h>
#include <string.h>
int main() {
	char src[100], destn[100];
	scanf("%s", &src);
	int n;
	scanf("%d", &n);
	printf("The source string: %s", src);
	
	// strncpy()
	strncpy(destn, src, n);
	
	// print
	printf("\nThe copied string: %s", destn);
}