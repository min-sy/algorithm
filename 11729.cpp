#include <stdio.h>
#include <math.h>

void hanoi(int n, int from, int aux, int to) {
	if (n == 1) {
		printf("%d %d\n", from, to);
		return;
	}
	hanoi(n - 1, from, to, aux);
	printf("%d %d\n", from, to);
	hanoi(n - 1, aux, from, to);
}

int main(void) {
	int n;
	scanf("%d", &n);
	printf("%d\n", (int)pow(2, n) - 1);
	hanoi(n, 1, 2, 3);
	return 0;
}