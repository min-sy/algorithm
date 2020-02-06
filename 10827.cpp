#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	char a[40] = "";
	int b;
	scanf("%s%d", &a, &b);

	if (b == 1) {
		printf("%s", a);
		exit(0);
	}
	char* a_dot = strchr(a, '.');
	unsigned long long a_point = atoi(a_dot + 1);
	int a_decimal = atoi(a);
	char result[50] = "";
	for (int i = 0; i < strlen(a); i++)
		result[i] = a[i];

	for (int i = 1; i < b; i++) {
		char* dot = strchr(result, '.');
		unsigned long long point = atoi(dot + 1);
		int decimal = atoi(result);
		decimal *= a_decimal;
		point *= a_point;
		int point_digit = strlen(dot) + strlen(a_dot) - 2;
		int carry = point / pow(10, point_digit+1);
		if (carry){
			decimal += carry;
			point %= (int)pow(10, point_digit+1);
		}
		int count = 0;
		while (!point/pow(10,count++));
		strcpy(result, "");
		sprintf(result, "%d.", decimal);
		dot = strchr(result, '.');
		for (int i = 1; i <= count; i++) dot[i] = '0';
		sprintf(dot+count+1, "%llu", point);

	}

	printf("%s", result);
	return 0;
}