#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	int flag = 0;
	int con;
	for (int i = 1; i <= n; i++) {
		int sum = i;
		int tmp = i;
		while (tmp) {
			sum += tmp % 10;
			tmp /= 10;
		}
		if (sum == n) {
			con = i;
			i = n + 1;
			flag = 1;
			break;
		}
	}
	if (flag) printf("%d", con);
	else printf("0");
	return 0;
}