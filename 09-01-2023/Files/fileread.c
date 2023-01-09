#include <stdio.h>
int main() {
	FILE *fp = fopen("test.txt", "r"); // file pointer or NULL
	if (fp == NULL) {
		printf("File not found");
	} else {
		printf("File opened successfully");
	}
}