#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	} // {4, 4, 7, 7, 9}
	
	int freq[100] = {0}; // {0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0}
	
	for (int i = 0; i < n; i++) { // i = 0
		freq[arr[i]]++; // freq[4]++
	}
	
	int sum = 0, cnt = 0;
	for (int i = 0; i < 100; i++) {
		if (freq[i] > 0 && freq[i] == i) {
			sum += i;
			cnt++;
		}
	}
	
	float avg = (float)sum / cnt;
	if (cnt > 0) {
		printf("%.2f", avg);
	}
	else {
		printf("-1");
	}
}