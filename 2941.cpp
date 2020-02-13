#include <stdio.h>
#include <string.h>

int main(void) {
	char str[101];
	scanf("%s", str);
	int length = 0;
	for (int i = 0; i < strlen(str); i++) {
		switch (str[i]) {
		case 'c': 
			if (str[i + 1] == '-')
				i++;
		case 's':
			if (str[i + 1] == '=')
				i++;
			break;
		case 'n': case 'l':
			if (str[i + 1] == 'j')
				i++;
			break;
		case 'd':
			if (i < strlen(str) - 2 && strncmp(str + i, "dz=", 3) == 0) {
				i += 2;
			}
			else if (str[i + 1] == '-')
				i++;
			break;
		case 'z':
			if (str[i + 1] == '=')
				i++;
			break;
		}
		length++;
	}
	printf("%d", length);
}