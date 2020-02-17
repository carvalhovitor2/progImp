#include <stdio.h>
#include <string.h>

int main(){
	int sequencia[9999], aux=1, maior, cumprimento=0, segundoMaior;

	printf("Insira uma sequencia de numeros e, quando terminar, insira '0'\n");
	for(int i=0;aux!=0;i++){
		scanf("%d", &aux);
		sequencia[i] = aux;
	} 
	
	//Calculating the number of elements in the sequence
	for(int i=0;sequencia[i]!='\0';i++){
		cumprimento++;
	}

	maior = sequencia[0];
	for(int i=0;i<=cumprimento;i++){
		if( sequencia[i] > maior){
			segundoMaior = maior;
			maior = sequencia[i];	
		}
	}
	printf("o maior elemento da sequencia eh: %d\n", segundoMaior);
	return 0;
}
