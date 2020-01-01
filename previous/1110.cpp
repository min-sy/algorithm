#include <stdio.h>
int getCycle(int n){
	int count=1;
	int num = (n/10 + n%10) %10 + (n%10) * 10;
	while(num != n){
		count++;
		num = (num/10 + num%10) %10 + (num%10) * 10;
	}
	return count;
}
int main(void){

	int n;
	scanf("%d",&n);
	printf("%d",getCycle(n));
	return 0;
}