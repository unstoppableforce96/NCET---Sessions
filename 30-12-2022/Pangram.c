#include <stdio.h>
int main() {
	char s[1001];
	scanf("%[^\n]s", &s); // abcdxyz
	int freq[26] = {}; // 0 25
	for (int i = 0; s[i] != '\0'; i++) { // i = 1
		if (s[i] >= 'a' && s[i] <= 'z') {
			freq[s[i] - 97]++;
		}
		else if (s[i] >= 'A' && s[i] <= 'Z') {
			freq[s[i] - 65]++;
		}
	}
	int is_pangram = 1;
	for (int i = 0; i < 26; i++) {
		if (freq[i] == 0) {
			is_pangram = 0;
			break;
		}
	}
	
	if (is_pangram) printf("pangram");
	else printf("not pangram");
}		