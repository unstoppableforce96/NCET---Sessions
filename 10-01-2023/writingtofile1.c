#include <stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	FILE *fp = fopen("sample.txt", "w");
	while (t--) {
		int a, b;
		scanf("%d%d", &a, &b);
		int c = a + b;
		fprintf(fp, "%d %d\n%d\n", a, b, c);
	}
}