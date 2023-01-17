#include <stdio.h>
char get_grade(int marks) {
	if (marks >= 90) return 'O';
	else if (marks >= 80) return 'A';
	else if (marks >= 70) return 'B';
	else if (marks >= 60) return 'C';
	else if (marks >= 50) return 'D';
	else return 'E';
}
int main() {
	FILE *fp = fopen("records.csv", "w");
	fprintf(fp, "%s,%s,%s,%s,%s\n", "ID", "Name", "Branch", "Marks", "Grade");
	int n;
	printf("How many students?: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int id, marks;
		char name[20], branch[20], grade;
		printf("Enter Student %d details\n", i + 1);
		printf("ID?: ");
		scanf("%d", &id);
		printf("Name?: ");
		scanf("%s", &name);
		printf("Branch?: ");
		scanf("%s", &branch);
		printf("Marks?: ");
		scanf("%d", &marks);
		grade = get_grade(marks);
		fprintf(fp, "%d,%s,%s,%d,%c\n", id, name, branch, marks, grade);
	}
}