#include <stdio.h>


int main(void) {
	
	int kang[3];
	int count = 0;
	for (int i = 0; i < 3; i++) scanf("%d", &kang[i]);
	while (true) {
		int left = kang[1] - kang[0];
		int right = kang[2] - kang[1];
		if (left == 1 && right == 1) break;
		if (left < right) { //왼쪽이 오른쪽보다 넓을 때 오른쪽으로 점프
			kang[0] = kang[1];
			kang[1]++;
		}
		else {
			kang[2] = kang[1];
			kang[1]--;
		}
		count++;
	}printf("%d", count);
	return 0;
}