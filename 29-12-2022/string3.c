#include <stdio.h>
int main() {
	char s[1000];
	scanf("%[^\n]s", &s);
	int up = 0, lw = 0, di = 0, sp = 0;
	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] >= 'a' && s[i] <= 'z') lw++;
		else if (s[i] >= 'A' && s[i] <= 'Z') up++;
		else if (s[i] >= '0' && s[i] <= '9') di++;
		else sp++;
	}
	printf("%d %d %d %d", lw, up, di, sp);
}