#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int mdc(int n1, int n2){
	int maior, menor, i;
	if (n1 > n2){
		maior = n1;
		menor = n2;
	}
	else{
		maior = n2;
		menor = n1;
	}
	for(i = menor; i > 0, !(menor%i == 0 && maior%i == 0); i--);
	return i;
}

int main(){
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	if ( num1 < 0 || num2 < 0){
		printf("Nao sao numeros inteiros maiores que zero\n");
		return 0;
	}
	printf("mdc(%d,%d) = %d\n", num1, num2, mdc(num1, num2));
	return 0;
}

