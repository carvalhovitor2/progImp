#include <stdio.h>


int contaPal(char *s1){
	int palavras=0, i, length, flag=1;
	//Ignoring spaces at the beggining of string
	while(*s1 == ' '){
		*s1++;
	}
	

	//Couting words after ignoring leading spaces	
	while(*s1 != '\0'){
		//While its a space just set flag to one and check next char
		while(*s1 == ' ' && *s1 != '\0' ){
			s1++;
			flag=1;
		}
		if(flag == 1)palavras++;
		flag=0;
		*s1++;
	}

	return palavras;
}


int main(){
	char s1[1000], s2[1000];
	printf("Insira uma string:\n");
	gets(s1);
	printf("O numero de palavras na string fornecida eh: %d\n", contaPal(s1));
	return 0;
}
