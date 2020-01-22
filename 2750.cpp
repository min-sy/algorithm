#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	int arr[1000];
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
	for (int i = 0; i < n; i++) {
		int min = i;
		
		for (int j = i + 1; j < n; j++) {
			if (arr[min] > arr[j]) min = j;
		}
		if (arr[i] > arr[min]) {
			int temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;

		}
	}
	for (int i = 0; i < n; i++) printf("%d\n", arr[i]);
	return 0;
}