#include <stdio.h>

int n;
int queue[5001];
int rear, front;

void enqueue(int num) {
	front = (front + 1) % (n+1);
	queue[front] = num;
}
int dequeue() {
	rear = (rear + 1) % (n+1);
	return queue[rear];
}

int empty() {
	return rear == front;
}

int main(void) {
	int k;
	scanf("%d%d", &n, &k);
	for (int i = 1; i <= n; i++)
		enqueue(i);

	int count = 0;
	printf("<");
	while (!empty()) {
		int temp = dequeue();
		if ((++count) == k) {
			printf("%d", temp);
			if (!empty()) printf(", ");
			count = 0;
			continue;
		}
		enqueue(temp);
	}
	printf(">\n");
	return 0;
}