#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	int sum = 0, super_element_count = 0;
	//
//	printf("Number\t\t\tFrequency\n");
	for (int i = 0; i < n; i++) {
		int cnt = 0, rep = 0;
		for (int j = 0; j < n; j++) {
			if (arr[j] == arr[i]) {
				cnt++;
			}
			if (j < i && arr[j] == arr[i])
			{
				rep = 1;
				break;
			}
		}
//		printf("%d\t\t\t%d\n", arr[i], cnt);
		if (rep == 0 && arr[i] == cnt) {
			sum += arr[i];
			super_element_count++;
		}
	}
	float avg = (float)sum / super_element_count;
	if (super_element_count == 0) {
		printf("-1");
	}
	else {
		printf("%.2f", avg);
	}
}
	