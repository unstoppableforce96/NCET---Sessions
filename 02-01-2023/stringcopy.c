// strcpy() --> 
#include <stdio.h>
#include <string.h>
int main() {
	char src[100], destn[100];
	scanf("%s", &src);
	
	printf("The source string: %s", src);
	
	// strcpy()
	strcpy(destn, src);
	
	// print
	printf("\nThe copied string: %s", destn);
}