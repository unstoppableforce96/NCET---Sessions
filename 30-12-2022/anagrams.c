// Anagrams
#include <stdio.h>
int main() {
	char s1[100], s2[100];
	scanf("%s%s", &s1, &s2);
	int f1[26] = {0}, f2[26] = {0};
	
	// frequency of s1
	for (int i = 0; s1[i] != '\0'; i++) {
		f1[s1[i] - 97]++;
	}
	
	// frequency of s2
	for (int i = 0; s2[i] != '\0'; i++) {
		f2[s2[i] - 97]++;
	}
	int is_anagram = 1;
	for (int i = 0; i < 26; i++) {
		if (f1[i] != f2[i]) {
			is_anagram = 0;
			break;
		}
	}
	
	if (is_anagram) printf("Anagrams");
	else printf("Not Anagrams");
}