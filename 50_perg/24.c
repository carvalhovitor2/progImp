#include <stdio.h>

//Repare que essa funcao eh absurdamente parecida com a iguaisConsecutivos (exercicio 15). Usei ela como base.
int remRep(char *string){
	int novoComprimento=0;
	while(*string){
		while(*string == *(string+1) && *string != '\0'){
			for(int j = 0;*(string+j) != '\0';j++){
                                *(string+j) = *(string+j+1);
                        }
		}
		*string++;
		novoComprimento++;
	}
	return novoComprimento;
}



int main(){
	char string[1000];
	printf("Insira uma string:\n");
	gets(string);
	printf("O comprimento da string resultante eh: %d\n", remRep(string));
	printf("A nova string eh: %s\n", string);
	return 0;
}
