#include <stdio.h>
#include <algorithm>
int main(void) {
	int n;
	int p[1000];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)scanf("%d", &p[i]);
	std::sort(p, p + n);
	int sum = 0;
	for (int i = 0; i < n; i++) sum += p[i] * (n - i);
	printf("%d", sum);
	return 0;
}