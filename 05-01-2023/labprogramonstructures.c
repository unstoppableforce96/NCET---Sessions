#include <stdio.h>
struct Student {
	int usn;
	char name[20];
	int marks[5];
	int total;
};

int main() {
	printf("How many students?: ");
	int n;
	scanf("%d", &n);
	
	struct Student s[n];
	
	int sum_of_totals = 0, avg;
	for (int i = 0; i < n; i++) {
		printf("Enter Student %d details:\n", i + 1);
		printf("USN?: ");
		scanf("%d", &s[i].usn);
		printf("Name?: ");
		scanf("%s", &s[i].name);
		printf("Enter marks in 5 subjects:\n");
		for (int j = 0; j < 5; j++) {
			scanf("%d", &s[i].marks[j]);
		}	
		
		// calculating the total marks for each student
		s[i].total = 0;
		for (int j = 0; j < 5; j++) {
			s[i].total += s[i].marks[j];
		}
		sum_of_totals += s[i].total;
	}
	avg = sum_of_totals / n;
	printf("Category 1: Students with total less than average\n");
	for (int i = 0; i < n; i++) {
		if (s[i].total < avg) {
			printf("%d %s\n", s[i].usn, s[i].name);
		}
	}
	
	printf("\n\nCategory 2: Students with total more than average\n");
	for (int i = 0; i < n; i++) {
		if (s[i].total > avg) {
			printf("%d %s\n", s[i].usn, s[i].name);
		}
	}
	
}