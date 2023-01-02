// strncat() --> 
// hello everyone
#include <stdio.h>
#include <string.h>
int main() {
	char src[100], destn[100];
	int n;
	scanf("%s%s", &src, &destn);
	scanf("%d", &n);
	strncat(destn, src, n);
	printf("%s", destn);
}