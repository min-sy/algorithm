#include <stdio.h>

int main(void) {
	int gram;
	int five, three;
	

	scanf("%d", &gram);



	if (gram % 5 == 0) {
		printf("%d", gram / 5);
	}
	else {
		int sum = 0;
		while (gram>0) {
			if (gram % 5 == 0) {
				sum += gram / 5;
				break;
			}
			gram -= 3;
			sum++;
		}

		if(gram<0)printf("-1");
		else printf("%d", sum);
	}


	return 0;
}