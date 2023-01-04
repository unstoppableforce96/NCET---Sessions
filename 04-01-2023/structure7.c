#include <stdio.h>
#include <string.h>
struct Student {
	int id; // 4 bytes
	char name[20];  // 20 bytes
	float cgpa; // 4 bytes
	// size of the structure Student is 24 bytes
};

int main() {
	// creating a structure variable
	struct Student s1;
	// reading values  into structure members
	scanf("%d", &s1.id);
	scanf("%s", &s1.name);
	scanf("%f", &s1.cgpa);
	printf("%d %s %.2f\n", s1.id, s1.name, s1.cgpa);
}