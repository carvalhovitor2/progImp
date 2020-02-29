#include <stdio.h>
#define MAX_CHARS 255 //Total de chars na tabela ascii


char charMaisFreq(char *string){
	int frequencies[MAX_CHARS], ascii_code, maior = 0, maiorFrequencia = 0;
	for(int i=0;i<MAX_CHARS;i++){
		frequencies[i] = 0; // A principio nenhum char aparece nenhuma vez
	}

	//Percorrer string e adicionar uma unidade ocorrencia ao contador de frequencias de cada char 
	while(*string != '\0'){
		ascii_code = (int)(*string);
		frequencies[ascii_code] +=1;
		*string++;
	}
	
	//Achar o que tem obteve maior frequencia
	for(int i=0;i<MAX_CHARS;i++){
		if(frequencies[i] > maiorFrequencia){
			maiorFrequencia = frequencies[i];
			maior = i;	
		}
	}
	return (char)maior;
}



int main(){
	char string[100000];
	printf("Insira uma string:\n");
	gets(string);
	printf("O char mais frequente em %s eh: %c\n", string, charMaisFreq(string));
	return 0;
}
