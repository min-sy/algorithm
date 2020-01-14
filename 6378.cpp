#include <stdio.h>
#include <string.h>

void digit(char* n) {
	int sum;
	while (1) {
		sum = 0;
		for (int i = 0; i < strlen(n); i++) {
			sum += n[i] - '0';
		}
		if (sum < 10) {
			printf("%d\n", sum);
			break;
		}
		else {
			for (int i = 0; i < strlen(n); i++) n[i] = '0';
			sprintf(n, "%d", sum);
		}
	}
}

int main(void) {
	while (true) {
		char n[1001]="";
		scanf("%s", &n);
		if (strcmp(n,"0")==0) break;
		digit(n);

	}
	return 0;
}