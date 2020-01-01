#include <stdio.h>

int main(void) {

	int A, B, C, multi;
	int count[10] = { 0 };

	scanf("%d %d %d", &A, &B, &C);
	multi = A * B *C;

	while (multi) {
		count[multi % 10]++;

		multi /= 10;


	}
	for (int i = 0; i < 10; i++) printf("%d \n", count[i]);


	return 0;
}