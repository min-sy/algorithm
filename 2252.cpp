#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int num;
	node* link;
} node;

node* list[32001];

void init(int n) {
	for (int i = 1; i <= n; i++)
		list[i] = NULL;
}
void insert(int num, node** head) {
	node* newNode = (node*)malloc(sizeof(node));
	newNode->link = NULL;
	newNode->num = num;
	if (*head == NULL) {
		*head = newNode;
	}
	else {
		node* current = *head;
		node* next = current->link;
		while (next != NULL) {
			current = next;
			next = next->link;
		}
		current->link = newNode;
	}
}
void top_sort(int n, int* degree) {
	int top = -1;
	int stack[32001];
	for (int i = 1; i <= n; i++) {
		if (degree[i] == 0) {
			stack[++top] = i;
		}
	}
	while (top >= 0) {
		int w = stack[top--];
		printf("%d ", w);
		node* tmp = list[w];
		while (tmp != NULL) {
			int u = tmp->num;
			degree[u]--;
			if (degree[u] == 0) stack[++top] = u;
			tmp = tmp->link;
		}
	}
}

int main(void) {
	int n, m;
	scanf("%d%d", &n, &m);
	int degree[32001] = {};
	init(n);
	for (int i = 0; i < m; i++) {
		int before, after;
		scanf("%d%d", &before, &after);
		insert(after, &list[before]);
		degree[after]++;
	}
	top_sort(n, degree);

	return 0;
}