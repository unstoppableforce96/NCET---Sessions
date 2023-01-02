// strlen()
#include <stdio.h>
#include <string.h>
int main() {
	char str[1001];
	scanf("%[^\n]s", &str);
	int n = strlen(str);
	printf("%d", n);
}