// strcat --> string concatenation --> Combining two strings
#include <stdio.h>
#include <string.h>
int main() {
	char src[100], destn[100];
	scanf("%s%s", &src, &destn);
	strcat(destn, src);
	printf("%s", destn);
}