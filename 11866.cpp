#include <stdio.h>
//요세푸스 문제0
 int main(void) {
	int queue[1001];
	int front = 0, rear = 0;
	int n, k;
	scanf("%d%d", &n, &k);
	for (int i = 1; i <= n; i++) {
		front = (front + 1) % (n+1);
		queue[front] = i;
	}
	int count = 1;
	printf("<");
	while (rear != front) {
		rear = (rear + 1) % (n+1);
		int pop = queue[rear];
		if (count == k) {
			printf("%d", pop);
			count = 1;
			if (rear != front) {
				printf(", ");
			}
		}
		else {
			front = (front + 1) % (n+1);
			queue[front] = pop;
			count++;
		}
	}

	printf(">\n");
	return 0;
}