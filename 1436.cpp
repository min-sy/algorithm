#include <stdio.h>

int main(void) {
	int n, ans=0;
	scanf("%d", &n);
	while (++ans) {
		int flag = 0;
		int tmp = ans;
		while (tmp) {
			if (tmp % 1000 == 666) {
				flag = 1;
				break;
			}
			tmp /= 10;
		}
		if (flag) {
			n--;
			if (!n) break;
		}
	}
	printf("%d", ans);
	return 0;
}