#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int mdc(int n1, int n2){
	int maior=n1, menor=n2, aux;
	if (menor > maior){
		aux = menor;
		menor = maior;
		maior = aux;
	}
	while( maior != 0 && menor != 0 ){
		maior -= menor;
		if (menor > maior){
			aux = menor;
			menor = maior;
			maior = aux;
		}
	}
	return maior;
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

