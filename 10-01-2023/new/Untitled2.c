#include <stdio.h>
int main() {
	FILE *ptr = fopen("toc.jpg", "rb");
	char buffer[198490]; // 10000 bytes --> 800 bits
	fread(buffer, sizeof(buffer), 1, ptr);
	
	FILE *fp = fopen("duplicate.jpg", "wb");
	fwrite(buffer, sizeof(buffer), 1, fp);
}