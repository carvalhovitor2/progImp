#include <stdio.h>
#include <string.h>
#define MAX_NUMBERS 99999

int main(){
	int sequencia[MAX_NUMBERS], aux=1, maior, cumprimento=0, contador=0;

	printf("Insira uma sequencia de numeros e, quando terminar, insira '0'\n");
	for(int i=0;aux!=0;i++){
		scanf("%d", &aux);
		sequencia[i] = aux;
		contador++;
	} 
	

	maior = sequencia[0];
	for(int i=0;i<contador;i++){
		if( sequencia[i] > maior){
			maior = sequencia[i];
		}
	}
	printf("o maior elemento da sequencia eh: %d\n", maior);
	return 0;
}
