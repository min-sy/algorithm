#include <stdio.h>
#include <string.h>
#define BLANK 1

int main(void) {
	char line[600001]="";
	scanf("%s", line);
	int cursor = strlen(line);
	int m;
	scanf("%d ", &m);
	for (int i = 0; i < m; i++) {
		char command[4]="";
		char ch;
		int index = 0;
		while(1) {
			scanf("%c",&ch);
			if (ch == '\n') break;
			command[index++] = ch;
		}
		switch (command[0]) {
		case 'L':
			if (cursor > 0) {
				for (; line[cursor - 1] == BLANK; cursor--);
				cursor--;
			}
			break;
		case 'D':
			if (cursor < strlen(line)) {
				for (; line[cursor] == BLANK; cursor++);
				cursor++;
			}
			break;
		case 'B':
			if (cursor == strlen(line)) line[(cursor--) - 1] = '\0';
			else if (cursor == 1) {
				int i;
				for (i = 1; i < strlen(line); i++) {
					line[i - 1] = line[i];
				}
				line[i - 1] = '\0';
				cursor = 0;
			}
			else if (cursor > 0) {
				line[cursor - 1] = BLANK;
				for (; line[cursor - 1] == BLANK; cursor--);
			}
			break;
		case 'P':
			if (line[cursor - 1] == BLANK) line[cursor - 1] = command[2];
			else if(cursor == strlen(line))line[cursor++] = command[2];
			else {
				for (int i = strlen(line) - 1; i >= cursor; i--) {
					line[i + 1] = line[i];
				}
				line[cursor++] = command[2];
			}
		}
	}

	for (int i = 0; i < strlen(line); i++) {
		if (line[i] == BLANK) continue;
		printf("%c", line[i]);
	}
	return 0;
}