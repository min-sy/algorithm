#include <stdio.h>


int main(void) {
	int n, k;
	int s[500000];
	int top = -1;
	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; i++) {
		int temp;
		scanf("%1d", &temp);
		while(top >= 0 && s[top] < temp && k) {
			top--;
			k--;
		}
		s[++top] = temp;
	}
	for (int i = 0; i <= top - k; i++) printf("%d", s[i]);
	printf("\n");
	
	return 0;
}