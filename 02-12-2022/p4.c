// vote cast
// two way conditional check
#include <stdio.h>
int main()
{
	int age;
	printf("Enter your age: ");
	scanf("%d", &age); // 12 --> age
	if (age > 18) // 12 > 18 --> 0 --> False
	{
		printf("Yes, you can vote!");
//		printf("%d", 10 + 20);
	}
	else 
	{
		printf("No, you cannot vote yet!");
	}
}
