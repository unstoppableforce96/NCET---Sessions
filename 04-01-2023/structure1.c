#include <stdio.h>
struct Student {
	int id; // 4 bytes
	char name[20];  // 20 bytes
	// size of the structure Student is 24 bytes
};

int main() {
	printf("%d bytes", sizeof(struct Student));
}