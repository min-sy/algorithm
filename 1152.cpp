#include <stdio.h>

int main(void) {
	char pre = 0, ch=0;
	int cnt = 0;
	while (1) {
		scanf("%c", &ch);
		if (ch == '\n') {
			if (pre == ' ') cnt--;
			break;
		}
		if (ch == ' ' && pre != 0) cnt++;
		pre = ch;
	}
	printf("%d", cnt + 1);
	return 0;
}