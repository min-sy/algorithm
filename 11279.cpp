#include <stdio.h>

int heap[100001];
int cnt;

void insert_max_heap(int n) {
	cnt++;
	int tmp = cnt;
	while (tmp != 1 && n > heap[tmp / 2]) {
		heap[tmp] = heap[tmp / 2];
		tmp /= 2;
	}
	heap[tmp] = n;
}

int delete_max_heap() {
	if (cnt == 0) return 0;
	int parent=1, child=2, n, temp;
	n = heap[1];
	temp = heap[cnt--];
	while (child <= cnt) {
		if (child < cnt && heap[child] < heap[child + 1])
			child++;
		if (temp >= heap[child]) break;
		heap[parent] = heap[child];
		parent = child;
		child *= 2;
	}
	heap[parent] = temp;
	return n;
}

int main(void) {
	int n;
	scanf("%d", &n);
	while (n--) {
		int t;
		scanf("%d", &t);
		if (!t) {
			printf("%d\n",delete_max_heap());

		}
		else {
			insert_max_heap(t);
		}
	}
	return 0;
}