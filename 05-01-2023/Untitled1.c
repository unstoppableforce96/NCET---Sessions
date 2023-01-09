#include <stdio.h>
struct Employee {
	int empid; // 4 bytes
	char empname[20]; // 20 bytes
	float empsal; // 4 bytes
	// 28 bytes in total
};

struct Student {
	int sid; // 4 bytes
	char sname[20]; // 20 bytes
	float cgpa; // 4 bytes
	// 28 bytes in total
};

struct Organization {
	char orgname[20]; // 20 bytes
	int orgnumber; // 4 bytes
	struct Employee emp; // 28 bytes
	struct Student stu; // 28 bytes
	// 80 bytes in total
};

int main() {
	struct Organization O1;
//	printf("%d", sizeof(O1));
	printf("Enter Organization Name?: ");
	scanf("%s", &O1.orgname);
	printf("Enter Organization Number?: ");
	scanf("%d", &O1.orgnumber);
	int no_of_employees;
	printf("Enter number of employees in %s?:", O1.orgname);
	O1.emp employees_org1[no_of_employees];
	for (int i = 0; i < no_of_employees; i++) {
		printf("Enter Employee %d details of %s\n", i + 1, O1.orgname);
		printf("Empid?: ", employees_org1[i].)
	}
}