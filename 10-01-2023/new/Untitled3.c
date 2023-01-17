#include <stdio.h>
int main() {
	FILE *ptr = fopen("test.txt", "r+");
	
	//Reading
	char ch;
	while ((ch = fgetc(ptr)) != 'r') {
		printf("%c", ch);
	}
	// Write
	fseek(ptr, 0, SEEK_END);
	fputs("Hello all this is read+ mode.", ptr);
}