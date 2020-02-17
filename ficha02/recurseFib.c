#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int fib(int n){
	if ( n < 2 )return 1;
	return fib(n-1) + fib(n-2);
}

int main(){
	int elem;
	printf("Insira o elemento desejado da sequencia de fibonacci\n");
	scanf("%d", &elem);
	printf("Por recursividade, o elemento calculado eh: %d\n", fib(elem-1));
	return 0;
}
