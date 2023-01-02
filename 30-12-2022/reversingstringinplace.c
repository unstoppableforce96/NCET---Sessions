// Reversing a string inplace
#include <stdio.h>
#include <string.h>
int main() {
	char s[100];
	scanf("%s", &s);
	for (int i = 0, j = strlen(s) - 1; i < j; i++, j--) {
		char d = s[i];
		s[i] = s[j];
		s[j] = d;
	}
	
	printf("%s", s);
}