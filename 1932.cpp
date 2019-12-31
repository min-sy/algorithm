#include <stdio.h>
#define MAX(a,b) ((a)>(b)?(a):(b))

int cal(int arr[][500], int n, int index, int size) {
	if (n == 1) return arr[size - n][index];
	int left = cal(arr, n - 1, index, size);
	int right = cal(arr, n - 1, index+1, size);
	return arr[size - n][index] + MAX(left, right);
}

int main(void) {
	int n;
	int arr[500][500];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	int left = cal(arr, n - 1, 0, n);
	int right = cal(arr, n - 1, 1, n);
	int result = arr[0][0] + MAX(left,right);
	printf("%d", result);
	return 0;
}