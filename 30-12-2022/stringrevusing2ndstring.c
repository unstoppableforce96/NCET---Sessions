// Reversing a string
// reversing using a second string
#include <stdio.h>
#include <string.h>
int main() {
	char s1[100], s2[100];
	scanf("%s", &s1);
	int i = 0, j = strlen(s1) - 1;
	for (; j >= 0; j--) {
		s2[i] = s1[j];
		i++;
	}
	s2[i] = '\0';
	printf("%s", s2);
}