#include <stdio.h>
struct Student {
	int id; // 4 bytes
	char name[20];  // 20 bytes
	// size of the structure Student is 24 bytes
};

int main() {
	// creating a structure variable
	struct Student s;
	printf("%d bytes", sizeof(s));
}