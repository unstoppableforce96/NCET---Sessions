#include <stdio.h>
struct Student {
	int id; // 4 bytes
	char name[20];  // 20 bytes
	// size of the structure Student is 24 bytes
};

int main() {
	// creating a structure variable
	struct Student s;
	// Accessing the members of the structure using . operator
	printf("%d bytes", sizeof(s.id));
	printf("\n%d bytes", sizeof(s.name));
}