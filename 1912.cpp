#include <stdio.h>

int main(void) {

	int dp[100010] = {};
	int num[100010] = {};
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &num[i]);
	}
	for (int i = 1; i <= n; i++) {
		if (dp[i - 1] + num[i] > num[i])
			dp[i] = dp[i - 1] + num[i];
		else
			dp[i] = num[i];
	}

	int max = dp[1];
	for (int i = 1; i <= n; i++)
		if (max < dp[i])
			max = dp[i];
	printf("%d", max);
	return 0;
}