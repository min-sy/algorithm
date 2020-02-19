#include <stdio.h>
#include <algorithm>
#include <math.h>

int main(void) {
	int n;
	int rank[500000] = {};
	long long sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &rank[i]);
	}
	
	std::sort(rank, rank + n);
	for (int i = 1; i <= n; i++)
		sum += (long long)abs(i - rank[i - 1]);
	printf("%lld\n", sum);
	return 0;
}