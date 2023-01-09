// Writing a file in C
#include <stdio.h>
int main() {
	FILE *fp = fopen("sample.txt", "w"); // sample.txt is not present
	// fputc() --> write a single character to the file
	// fputs() --> write some string to the file
	// fprintf() --> write formatted data
//	fputc('z', fp); // write a character z in my file sample.txt (fp)
//	fputs("Hello all this is file writing using fputs() in C", fp); 
//	char buffer[100];
//	scanf("%[^\n]s", &buffer);
//	fputs(buffer, fp);

	fprintf(fp, "%d %s %f", 100, "pavan", 12.2);
}