#include <stdio.h>

int dwarf[30001];

int isGood(int start, int end, int *count) {
	if (start == end) {
		count[dwarf[start]]++;
		return dwarf[start];
	}
	int left = isGood(start, (start+end)/ 2, count);
	int right = isGood((start+end) / 2 + 1, end, count);
	return count[dwarf[left]] >= count[dwarf[right]] ? dwarf[left] : dwarf[right];
}

int main(void) {
	int n, c;
	scanf("%d%d", &n, &c);
	for (int i = 1; i <= n; i++)scanf("%d", &dwarf[i]);
	int m;
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		int start, end;
		int count[10001] = {};
		scanf("%d%d", &start, &end);
		int result = isGood(start, end, count);
		if (count[result]>(end-start+1)/2)
			printf("yes %d\n", result);
		else printf("no\n");
	}
	return 0;
}