#include <stdio.h>


int difConsecutivos(char *string){
	int maiorDif=1, candidatoMaiorDif=1;
	while(*string != '\0'){
		while(*string != *(string+1) && *(string+1) != '\0'){
			candidatoMaiorDif++;
			*string++;
		}
		
		if(candidatoMaiorDif > maiorDif){
			maiorDif = candidatoMaiorDif;
		}
		candidatoMaiorDif = 1;
		*string++;
	}
	return maiorDif;
}


int main(){
	char string[1000];
	printf("Insira uma string:\n");
	gets(string);
	printf("A maior substring com caracteres completamentes distintos tem cumprimento %d\n", difConsecutivos(string));
	return 0;
}
