#include <stdio.h>

int main(void) {
	int n;
	int body[50][3];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &body[i][0], &body[i][1]);
		body[i][2] = n;
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (body[i][0] > body[j][0] && body[i][1] > body[j][1]) {
				body[i][2]--;
			}
			else if (body[j][0] > body[i][0] && body[j][1] > body[i][1]) {
				body[j][2]--;
			}
			else {
				body[i][2]--; body[j][2]--;
			}
		}
	}
	for (int i = 0; i < n; i++) printf("%d ", body[i][2]);
	return 0;
}