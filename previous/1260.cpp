#include <stdio.h>

void dfs( int, int);
void bfs( int, int);


int visited[1000] = {};
int graph[1000][1000] = {};

int main(void) {
	int n, m, v;
	
	scanf("%d%d%d", &n, &m, &v);
	for (int i = 0; i < m; i++) {
		int x, y;
		scanf("%d%d", &x, &y);
		graph[x-1][y-1] = 1; graph[y-1][x-1] = 1;
	}
	dfs( n, v-1);
	printf("\n");
	for (int i = 0; i < n; i++) visited[i] = 0;
	bfs( n, v-1);
	return 0;
}

void dfs(int n, int v) {
	visited[v] = 1;
	printf("%d ", v+1);
	for (int i = 0; i < n; i++) {
		if (graph[v][i] && !visited[i]) dfs(n, i);
	}
}
void bfs(int n, int v) {
	int queue[1001] = {};
	int rear = 0, front = 0;
	printf("%d ", v+1);
	visited[v] = 1;
	rear = (rear + 1) % 1001;
	queue[rear] = v;
	while (rear != front) {
		front = (front + 1) % 1001;
		v = queue[front];
		for (int i = 0; i < n; i++) {
			if (graph[v][i] && !visited[i]) {
				printf("%d ", i+1);
				visited[i] = 1;
				rear = (rear + 1) % 1001;
				queue[rear] = i;
			}
		}
	}
}