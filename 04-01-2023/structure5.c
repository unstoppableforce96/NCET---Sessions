#include <stdio.h>
#include <string.h>
struct Student {
	int id; // 4 bytes
	char name[20];  // 20 bytes
	// size of the structure Student is 24 bytes
};

int main() {
	// creating a structure variable
	struct Student s1 = {123, "Pavan"};
	struct Student s2 = {456, "Kiran"};
	
	printf("%d %s\n", s1.id, s1.name);
	printf("%d %s\n", s2.id, s2.name);
}