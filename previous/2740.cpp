#include <stdio.h>

int main(void) {
	int A[100][100], B[100][100];
	int n, m, k;

	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) scanf("%d", &A[i][j]);
	}
	scanf("%d %d", &m, &k);
	for (int i = 0; i < m; i ++) {
		for (int j = 0; j < k; j++)scanf("%d", &B[i][j]);
	}

	int product[100][100] = { 0 };

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			for (int h = 0; h < m; h++)
				product[i][j] += A[i][h] * B[h][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) printf("%d ", product[i][j]);
		printf("\n");
	}
	return 0;
}