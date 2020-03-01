#include <stdio.h>


int maiorSufix(char *s1, char *s2){
	int maiorSufix=0;
	//Posicionando o pointer no fim da string s1
	while(*s1 != '\0'){
		*s1++;
	}
	//Nesse momento o pointer esta no \0, entao vou posiciona-lo um char antes, para estar no ultimo char da string
	s1--;
	//Fazendo igual para a string s2
	while(*s2 != '\0'){
		*s2++;
	}
	s2--;
	//Percorro as duas strings do fim ao inicio enquanto as duas forem iguais, adicionando uma unidade ao contador toda vez que os caracteres forem iguais
	while(*s1 == *s2 && *s1 != '\0'){
		maiorSufix++;
		*s1--;
		*s2--;
	}
	return maiorSufix;
}


int main(){
	char s1[1000], s2[1000];
	printf("Insira uma string:\n");
	gets(s1);
	printf("Insira outra string:\n");
	gets(s2);
	printf("O comprimento do maior sufixo comum entre as duas strings fornecidas eh: %d\n", maiorSufix(s1, s2));
	return 0;
}
