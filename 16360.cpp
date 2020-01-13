#include <stdio.h>
#include <string.h>
int main(void) {
	int n;
	char ch;
	scanf("%d", &n);
	while ((ch = getchar())!='\n');
	while (n--) {
		char str[35]="";
		scanf("%s", str);
		switch (str[strlen(str) - 1]) {
		case 'a': case 'o': case 'u': 
			strcat(str, "s");
			break;
		case 'r': case 'v': case 'l':
			strcat(str, "es");
			break;
		case 't' : case 'w' :
			strcat(str, "as");
			break;
		case 'y':
			str[strlen(str) - 1] = 'i';
		case 'i':
			strcat(str, "os");
			break;
		case 'n':
			str[strlen(str) - 1] = 'a';
			strcat(str, "nes");
			break;
		case 'e':
			if (str[strlen(str) - 2] == 'n') {
				str[strlen(str) - 2] = 'a';
				str[strlen(str) - 1] = 'n';
				strcat(str, "es");
			}
			else strcat(str, "us");
			break;
		default :
			strcat(str, "us");
		}
		printf("%s\n", str);
	}
	return 0;
}