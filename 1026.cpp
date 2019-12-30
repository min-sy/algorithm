#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

int main(void) {
	int* A;
	typedef struct {
		int data;
		int index;
	}temp;
	int n;
	scanf("%d", &n);
	temp *B = (temp*)malloc(sizeof(temp)*n);
	A = (int*)malloc(sizeof(int)*n);
	for (int i = 0; i < n; i++) scanf("%d", &A[i]);
	for (int i = 0; i < n; i++) {
		scanf("%d", &B[i].data);
		B[i].index = i;
	}

	for (int i = 0; i < n; i++) {
		int tempMin = B[i].data;
		int index=-1;
		for (int j=i+1; j < n; j++) {
			if (tempMin > B[j].data) {
				tempMin = B[j].data;
				index = j;
			}
		}
		if (tempMin < B[i].data) {
			int temp = B[index].data;
			B[index].data = B[i].data;
			B[i].data = temp;

			temp = B[i].index;
			B[i].index = B[index].index;
			B[index].index = temp;
			

		}
	}
	std::sort(A, A + n);
	int* C = (int*)malloc(sizeof(int)*n);
	for (int i = n - 1; i >= 0; i--) {
		C[B[n - i-1].index] = A[i];

	}
	free(A);
	int result = 0;
	for (int i = 0; i < n; i++) result += C[B[i].index] * B[i].data;
	free(B);
	free(C);
	printf("%d", result);
	return 0;
}