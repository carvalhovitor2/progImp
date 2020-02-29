#include <stdio.h>


int iguaisConsecutivos(char *string){
	int maiorComprimento=1, candidatoMaiorComprimento=1;
	while(*string){
		while(*string == *(string+1) && *string != '\0'){
			candidatoMaiorComprimento++;
			*string++;
	
		}
		if(candidatoMaiorComprimento > maiorComprimento){
			maiorComprimento = candidatoMaiorComprimento;
		}
		candidatoMaiorComprimento = 1;
		*string++;
	}
	return maiorComprimento;
}



int main(){
	char string[1000];
	printf("Insira uma string:\n");
	gets(string);
	printf("O comprimento da maior substring de caracteres identicos eh: %d\n", iguaisConsecutivos(string));
	return 0;
}
