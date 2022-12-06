#include <stdio.h>
void set_grade(int stu_marks)  // function definition
{
	if (stu_marks >= 90) printf("O\n");
	else if (stu_marks >= 80 && stu_marks < 90) printf("A\n");
	else if (stu_marks >= 70 && stu_marks < 80) printf("B\n");
	else if (stu_marks >= 60 && stu_marks < 70) printf("C\n");
	else if (stu_marks >= 50 && stu_marks < 60) printf("D\n");
	else printf("E\n");
}

int main()
{
	int stu1_marks = 85, stu2_marks = 45, stu3_marks = 67, stu4_marks = 89;
	set_grade(stu1_marks); // function call
	set_grade(stu2_marks); // function call
	set_grade(stu3_marks); // function call
	set_grade(stu4_marks); // function call
}