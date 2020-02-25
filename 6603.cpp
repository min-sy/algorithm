#include <stdio.h>

void cal(int* s, int ins, int* lotto, int inl, int k) {
	if (inl == 6) {
		for (int i = 0; i < 6; i++) printf("%d ", lotto[i]);
		printf("\n");
	}
	for (int i = ins; i < k; i++) {
		lotto[inl] = s[i];
		cal(s, i+1, lotto, inl+1, k);
	}
}

int main(void) {

	while (1) {
		int k;
		scanf("%d", &k);
		if (k == 0) break;
		int s[12], lotto[6];
		for (int i = 0; i < k; i++) scanf("%d", &s[i]);
		cal(s, 0, lotto, 0, k);
		printf("\n\n");
	}
	return 0;
}