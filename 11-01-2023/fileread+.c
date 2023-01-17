// r+ mode
#include <stdio.h>
int main() {
	FILE *ptr = fopen("xyz.txt", "r+"); // we can read but we cannot write;
	char buffer[50];
	fgets(buffer, 50, ptr);
	printf("%s", buffer);
	
	fputs("This is added through read + mode", ptr);
}