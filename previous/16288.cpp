#include <stdio.h>

int main(void) {
	int n, k, j, i;
	int p[100] = { 0, };
	int temp;
	scanf("%d%d", &n, &k);
	for (i = 0; i < n; i++) {
		scanf("%d", &temp);
		for (j = 0; j < k; j++) {
			if (temp > p[j]) {
				p[j] = temp;
				break;
			}
		}
		if (j == k) {
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}