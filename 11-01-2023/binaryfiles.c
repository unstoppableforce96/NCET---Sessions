#include <stdio.h>
int main() {
	FILE *fp1 = fopen("toc.jpg", "rb");
	// fread()
	char buffer[199000];
	fread(buffer, sizeof(buffer), 1, fp1);
	
	FILE *fp2 = fopen("duplicate.jpg", "wb");
	
	fwrite(buffer, sizeof(buffer), 1, fp2);
}