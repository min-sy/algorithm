#include <stdio.h>
#define MAX 1000

int main(void) {
	int n, k;
	int prime[MAX + 1];
	int result;
	int flag = 0;
	int count = 0;
	scanf("%d%d", &n, &k);
	for (int i = 2; i <=n; i++)
		prime[i] = 1;

	for (int i = 2; i <=n; i++) {
		if (!prime[i]) continue;
		count++;
		if (count == k) {
			result = i;
			break;
		}
		for (int j = i * 2; j <= n; j += i) {
			if (!prime[j]) continue;
			prime[j] = 0;
			count++;
			if (k==count) {
				result = j;
				flag = 1;
				break;
			}
		}
	}
	
	printf("%d", result);
	return 0;
}