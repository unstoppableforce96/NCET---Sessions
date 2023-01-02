// String Palindrome
// Two pointer approach
#include <stdio.h>
#include <string.h>
int main() {
	char str[1001];
	scanf("%s", &str);
	int n = strlen(str); // string length
	int is_palin = 1;
	for (int i = 0, j = n - 1; i < j; i++, j--) {
		if (str[i] != str[j]) {
			is_palin = 0;
			break;
		}
	}
	
	if (is_palin) printf("Palindrome");
	else printf("Not a Palindrome");
}