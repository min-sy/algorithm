#include <stdio.h>
#include <math.h>

int is_prime(int n) {
	if (n < 2) return 0;
	int sr = sqrt(n);
	for (int i = 2; i <= sr; i++)
		if (n%i == 0) return 0;
	return 1;
}

int main(void) {
	int m, n;
	int min=0, ans = 0;
	scanf("%d%d", &m,&n);
	for (int i = m; i <= n; i++) {
		if (is_prime(i)) {
			ans += i;
			if (!min) min = i;
		}
	}

	if (!min) printf("-1");
	else printf("%d\n%d", ans, min);
	return 0;
}