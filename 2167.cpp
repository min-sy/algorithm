#include <stdio.h>

int main(void) {
	int n, m, k;
	int dp[301][301] = {0};
	int result[10000] = {};
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			int tmp;
			scanf("%d", &tmp);
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + tmp;
 		}
	}

	scanf("%d", &k);
	for (int t = 0; t < k; t++) {
		int x1, x2, y1, y2;
		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
		result[t] = dp[x2][y2] - dp[x2][y1 - 1] - dp[x1 - 1][y2] + dp[x1 - 1][y1 - 1];
	}

	for (int i = 0; i < k; i++) printf("%d\n", result[i]);
	return 0;
}