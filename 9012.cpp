#include <stdio.h>
#include <string.h>
//괄호
int isVPS(char *ch) {
	char stack[50];
	int top = -1;
	for (int i = 0; i < strlen(ch); i++) {
		if (ch[i] == '(')
			stack[++top] = ch[i];
		else {
			if (top < 0) return 0;
			top--;
		}
	}
	return top == -1;
}

int main(void) {
	int n;
	scanf("%d", &n);
	while (n--) {
		char ch[51];
		scanf("%s", ch);
		printf(isVPS(ch) ? "YES\n" : "NO\n");
	}
	return 0;
}