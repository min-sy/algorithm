#include <stdio.h>
#include <string.h>

int main(void) {
	int n, ans=0;
	char str[101];
	scanf("%d", &n);
	scanf(" %s", str);
	for (int i = 0; i < strlen(str); i++) ans += str[i] - '0';
	printf("%d", ans);
	return 0;
}