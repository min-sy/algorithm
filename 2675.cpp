#include <stdio.h>
#include <string.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while (t--) {
		int r;
		char s[21];
		scanf("%d %s", &r, s);
		for (int i = 0; i < strlen(s); i++) {
			for (int j = 0; j < r; j++) {
				printf("%c", s[i]);
			}
		}
		printf("\n");
	}
	return 0;
}