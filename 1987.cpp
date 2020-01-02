#include <stdio.h>

int visited[26];
int count=0;
char alpha[20][20];
int direction[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };

void travel(int x, int y, int r, int c) {
	visited[alpha[x][y] - 'A'] = 1;
	count++;
	for (int i = 0; i < 4; i++) {
		int newx = x + direction[i][0];
		int newy = y + direction[i][1];
		if (newx < 0 || newx >= r || newy < 0 || newy >= c) continue;
		if (visited[alpha[newx][newy] - 'A']) continue;
		travel(newx, newy, r, c);
	}
}

int main(void) {
	int r, c;

	scanf("%d%d", &r, &c);
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			scanf(" %c", &alpha[i][j]);
		}
	}
	travel(0, 0, r, c);
	printf("%d", count);
	return 0;
}