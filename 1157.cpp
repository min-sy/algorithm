#include <stdio.h>

int main(void) {
	char ch=0;
	int alphabet[26] = {};
	int max = 0, flag = 0;
	while(1) {
		scanf("%c", &ch);
		if (ch == '\n') break;
		if (ch >= 'a' && ch <= 'z')
			ch -= 32;
		alphabet[ch - 'A']++;
		if (alphabet[ch - 'A'] > alphabet[max] || (ch-'A' == max && flag)) {
			max = ch - 'A';
			flag = 0;
		}
		else if (alphabet[ch - 'A'] == alphabet[max] && ch - 'A' != max) {
			flag = 1;
			max = ch - 'A';
		}
	}
	printf("%c\n", flag?'?':max+'A');
	return 0;
}