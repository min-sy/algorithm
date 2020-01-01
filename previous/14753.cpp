#include <stdio.h>
#include <algorithm>

int main(void) {
	
	int n;
	int arr[10000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
	std::sort(arr, arr + n);
	int max;
	max = arr[n - 1] * arr[n - 2] * arr[n - 3] > arr[n - 1] * arr[n - 2] ? arr[n - 1] * arr[n - 2] * arr[n - 3] : arr[n - 1] * arr[n - 2];
	max = max < arr[0] * arr[1] * arr[n-1] ? arr[0] * arr[1] * arr[n-1] : max;
	max = max < arr[0] * arr[1] ? arr[0] * arr[1] : max;
	printf("%d", max);

	return 0;
}
