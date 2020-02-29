#include <stdio.h>
#include <math.h>
#include <string.h>



int bitsUm (unsigned int n){
	unsigned int count = 0;
	while (n){
	count += n & 1;
	n >>= 1;
	}
	return count;
}
int main(){
	int num;
	printf("Insira um numero:\n");
	scanf("%d", &num);
	printf("bitsUm em %d: %d\n", num, bitsUm(num));
	return 0;
}
