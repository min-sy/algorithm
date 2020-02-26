#include <stdio.h>

typedef struct {
	int n;
	int p;
} Node;
Node tree[50];
int main(void) {
	int n, k;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &tree[i].p);
		if (tree[i].p >=0) tree[tree[i].p].n++;
	}
	scanf("%d", &k);
	if (tree[k].p >= 0) tree[tree[k].p].n--;
	tree[k].p = -2;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (tree[i].n ) continue;
		int t = tree[i].p;
		while (t >= 0) {
			t = tree[t].p;
		}
		if (p == -1) ans++;
	}
	printf("%d\n", ans);
	return 0;
}