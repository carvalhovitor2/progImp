#include <stdio.h>
#include <math.h>
#include <string.h>



int bitsUm (unsigned int n){
	unsigned int count = 0;
	printf("unsigned int n: %u\n", n);
	while (n){
	count += n & 1;
	n >>= 1;
	}
	return count;
}
int main(){
	int a=7;
	printf("bitsUm em %d: %d\n", a, bitsUm(a));
	return 0;
}
