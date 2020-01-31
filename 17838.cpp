#include <stdio.h>
#include <string.h>

int main(void) {
	int t;
	int isCommand;
	scanf("%d", &t);
	while (t--) {
		char str[10001]="";
		scanf("%s", str);
		isCommand = (strlen(str) == 7) && (str[0] == str[1]) && (str[1] == str[4]) && (str[2] == str[3]) && (str[5] == str[6]) && (str[3] == str[5])&&(str[0] != str[6]);
		printf("%d\n", isCommand);
		
	}
	return 0;
}