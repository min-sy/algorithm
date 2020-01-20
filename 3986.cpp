#include <stdio.h>
#include <string.h>

int isGood(char *);
int main(void) {
	int n;
	int count = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		char word[100001];
		scanf("%s", word);
		if (isGood(word)) count++;
	}
	printf("%d", count);
	return 0;
}

int isGood(char * word) {
	char stack[100000];
	int top = -1;
	for (int i = 0; i < strlen(word); i++) {
		if (top < 0)
			stack[++top] = word[i];
		else if (stack[top] == word[i]) 
			top--;
		else stack[++top] = word[i];
	}
	return top < 0;
}