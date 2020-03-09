#include <stdio.h>
#include <math.h>

int is_prime(int n) {
	int sr = sqrt(n);
	for (int i = 2; i <= sr; i++)
		if (n%i==0) return 0;
	return 1;
}

int main(void) {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int p = n / 2;
		while (1) {
			while (!is_prime(p)) {
				p--;
			}
			if (is_prime(n - p)) break;
			p--;
		}
		printf("%d %d\n", p, n-p);
	}
	return 0;
}