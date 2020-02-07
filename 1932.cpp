#include <stdio.h>
#define MAX(a,b) ((a)>(b)?(a):(b))


int main(void) {
	int dp[501][501] = {};
	int n, max=0;
	scanf("%d", &n);
	for (int i = 1; i <=n; i++) {
		for (int j = 1; j <= i; j++) {
			scanf("%d", &dp[i][j]);
			if (j == 1)
				dp[i][j] += dp[i - 1][j];
			else if (i == j)
				dp[i][j] += dp[i - 1][i - 1];
			else
				dp[i][j] += MAX(dp[i - 1][j - 1], dp[i - 1][j]);

			if (max < dp[i][j]) max = dp[i][j];
		}
	}

	printf("%d", max);
}