#include <stdio.h>
#include <math.h>

int is_prime(int n) {
	if (n < 2) return 0;
	int root = sqrt(n);
	for (int i = 2; i <= root; i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}

int main(void) {
	int n, ans=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int tmp;
		scanf("%d", &tmp);
		if (is_prime(tmp)) ans++;
	}
	printf("%d", ans);
	return 0;
}