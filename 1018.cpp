#include <stdio.h>
#include <limits.h>
#define MAX 50
#define MIN(a,b) (((a) < (b)) ? (a) : (b))

char white[8][8] = {
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'}
};
char black[8][8]{
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'}
};
char board[MAX][MAX];

int whiteChess(int x, int y);
int blackChess(int x, int y);

int main(void) {
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) scanf(" %c", &board[i][j]);
	}
	int result = INT_MAX;
	for (int i = 0; i < n - 7; i++) {
		for (int j = 0; j < m - 7; j++) {
			result = MIN(result, MIN(whiteChess(i, j), blackChess(i, j)));
		}
	}
	printf("%d", result);
	return 0;
}

int whiteChess(int x, int y) {
	int count = 0; 
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			count += board[x + i][y + j] != white[i][j];
		}
	}
	return count;
}
int blackChess(int x, int y) {
	int count = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			count += board[x + i][y + j] != black[i][j];
		}
	}
	return count;
}