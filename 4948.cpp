#include <stdio.h>
#define MAX 246912

int main(void) {
	int not_prime[MAX + 1] = {1, 1};
	int count[MAX + 1] = {};

	for (int i = 2; i <= MAX; i++) {
		if (not_prime[i]) continue;
		for (int j = i + i; j <= MAX; j += i) {	
			not_prime[j] = 1;
		}
	}

	for (int i = 2; i <= MAX; i++) {
		count[i] = count[i - 1];
		if (!not_prime[i]) count[i]++;
	}
	while (true) {
		int n;

		scanf("%d", &n);
		if (!n) break;

		printf("%d\n", count[2*n] - count[n]);

	}

	return 0;
}