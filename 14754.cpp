#include <stdio.h>

int main(void) {
	long long height[1000][1000];
	long long irremovable[1000][1000] = {};
	long long sum = 0;
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%lld", &height[i][0]);
		long long max= height[i][0];
		int index = 0;
		for (int j = 1; j < m; j++) {
			scanf("%lld", &height[i][j]);
			if (max < height[i][j]) {
				max = height[i][j];
				index = j;
			}
		}
		irremovable[i][index] =1 ;
	}

	for (int j = 0; j < m; j++) {
		long long max = height[0][j];
		int index = 0;
		for (int i = 1; i < n; i++) {
			if (max < height[i][j]) {
				max = height[i][j];
				index = i;
			}
		}
		irremovable[index][j]=1;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (!irremovable[i][j])
				sum += height[i][j];
		}
	}
	printf("%lld", sum);
	return 0;
}