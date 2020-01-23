#include <stdio.h>
#include <math.h>
#define SIZE 500001
int queue[500001];
int rear, front;

int pop() {
	int t = queue[rear];
	rear = (rear + 1) % SIZE;
	return t;
}
void push(int n) {
	front = (front + 1) % SIZE;
	queue[front] = n;
}
int top() {
	return queue[front];
}

int main(void) {
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		push(i);
	}

	while (abs(SIZE - rear + front) % SIZE > 1) {
		pop();
		push(top());

	}

	printf("%d", top());
	return 0;
}