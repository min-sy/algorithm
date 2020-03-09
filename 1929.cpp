#include <stdio.h>

int not_prime[1000001];

int main(void) {
	int m, n;
	scanf("%d%d", &m, &n);
	not_prime[1] = 1;
	for (int i = 2; i <= n; i++) {
		if (not_prime[i])continue;
		for (int j = 2 * i; j <= n; j += i)
			not_prime[j] = 1;
	}

	for (int i = m; i <= n; i++)
		if (!not_prime[i]) printf("%d\n",i);
	return 0;
}