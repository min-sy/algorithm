#include <stdio.h>

unsigned long long fibo[91];
int main(void){
    int n;
    scanf("%d", &n);
    fibo[1] = 1;
    for(int i= 2; i<=n; i++) fibo[i] = fibo[i-1]+fibo[i-2];
    printf("%llu", fibo[n]);
    return 0;
}