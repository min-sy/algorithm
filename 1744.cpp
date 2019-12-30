#include <stdio.h>
#define MAX_SIZE 10000
int main(void) {
	int n, i, j;
	int arr[MAX_SIZE] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	//오름차순으로 정렬
	for (i = 1; i < n; i++) {
		int key = arr[i];
		for (j = i - 1; j >= 0 && arr[j] > key; j--) {
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = key;
	}
	int sum = 0;
	int low = 0;
	int high = n - 1;
	for (; low < n - 1; low += 2) {
		if (arr[low] >= 1 || arr[low + 1] >= 1) break;
		sum += arr[low] * arr[low + 1];
	}
	for (; high > 0; high -= 2) {
		if (arr[high] <= 1 || arr[high - 1] <= 1) break;
		sum += arr[high] * arr[high - 1];
	}
	for (; high >= low; high--)
		sum += arr[high];
	printf("%d", sum);
	return 0;
}