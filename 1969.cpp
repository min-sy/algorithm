#include <stdio.h>
#include <string.h>

int main(void) {
	int n, m;
	int count[50][4] = {};
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		char line[51];
		scanf("%s", line);
		for (int j = 0; j < strlen(line); j++) {
			switch (line[j]) {
			case 'A':
				count[j][0]++;
				break;
			case 'C':
				count[j][1]++;
				break;
			case 'G':
				count[j][2]++;
				break;
			case 'T':
				count[j][3]++;
				break;
			}
		}
	}
	char result[51] = "";
	int haming = 0;

	for (int i = 0; i < m; i++) {
		int index = 0;
		int maxDNA = 0;
		for (int j = 0; j < 4; j++) {
			if (count[i][j] > maxDNA) {
				index = j;
				maxDNA = count[i][j];
			}
		}
		haming += (n - maxDNA);
		switch (index) {
		case 0:
			result[i] = 'A';
			break;
		case 1:
			result[i] = 'C';
			break;
		case 2:
			result[i] = 'G';
			break;
		case 3:
			result[i] = 'T';
			break;
		}
	}
	
	printf("%s\n", result);
	printf("%d", haming);
	return 0;
}