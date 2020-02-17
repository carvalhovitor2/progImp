#include <stdio.h>
#include <string.h>

int main(){
	int sequencia[9999], aux=1;
	float sum=0, cumprimento=0;

	printf("Insira uma sequencia de numeros e, quando terminar, insira '0'\n");
	for(int i=0;aux!=0;i++){
		scanf("%d", &aux);
		sequencia[i] = aux;
		sum+=aux;
	} 
	
	//Calculating the number of elements in the sequence
	for(int i=0;sequencia[i]!='\0';i++){
		cumprimento++;
	}
	

	printf("A media eh: %.2f\n", sum/cumprimento);
	return 0;
}

