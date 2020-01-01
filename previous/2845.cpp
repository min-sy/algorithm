#include <stdio.h>

int main(void) {

	int person, area, total;
	int estimate[5];

	scanf("%d %d", &person, &area);

	for (int i = 0; i < 5; i++) {
		scanf("%d", &estimate[i]);
	}
	total = person * area;
	for (int i = 0; i < 5; i++) printf("%d ", estimate[i] - total);

	return 0;
}