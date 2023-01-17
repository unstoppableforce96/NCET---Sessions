#include <stdio.h>
int main() {
	FILE *fp1 = fopen("source.txt", "r");
	char ch;
	// As long as an EOF is not encountered we can copy and paste the character
	FILE *fp2 = fopen("destination.txt", "w");
	while ((ch = fgetc(fp1)) != EOF) {
		fputc(ch, fp2);
	}
}