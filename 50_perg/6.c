#include <stdio.h>
#include <math.h>
#include <string.h>



int qDig(unsigned int n){
	int digits=1;
	while(n/10 != 0){
		digits++;
		n/=10;
	}
	return digits;
}

int main(){
	int a;
	printf("Insira um numero inteiro:\n");
	scanf("%d", &a);
	printf("Para escrever %d, sao necessarios %d digitos\n", a, qDig(a));
	return 0;
}
