#include <stdio.h>
int main() 
{
	int marks;
	scanf("%d", &marks);
	if (marks > 100) 
	{
		printf("Invalid Marks");
	}
	else if (marks >= 90) 
	{
		printf("O");
	}
	else if(marks >= 80 && marks < 90)
	{
		printf("A");
	}
	else if (marks >= 70 && marks < 80)
	{
		printf("B");
	}
	else if (marks >= 60 && marks < 70)
	{
		printf("C");
	}
	else if (marks >= 50 && marks < 60) 
	{
		printf("D");
	}
	else 
	{
		printf("E");
	}
}