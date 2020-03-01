#include <stdio.h>
#include <string.h>


int contida(char *s1, char*s2){
	int i=0;
	//Assumo que todos os caracteres de s1 estao contidos em s2, depois verifico se cada char de s1 efectivamente esta contido em s2
	//caso algum deles nao esteja, eu coloco a flag=0 e termino o ciclo. (Ou seja, ja posso retornar falso)
	int verdadeiro_ou_falso=1, flag=0;
	while(*s1 != '\0'){
		while (*(s2+i) != '\0'){
			if(*s1 == *(s2+i)) flag=1;
			i++;
		}
		if(flag == 0){
			verdadeiro_ou_falso=0;
			break;
		}
		*s1++;
		//Reseting variables to next iteration
		i=0;
		flag=0;
	}
	return verdadeiro_ou_falso;	
}



int main(){
	char s1[2000], s2[2000], verdade_ou_falso[2000]="False";
	printf("Insira uma string:\n");
	gets(s1);
	printf("Insira outra string:\n");
	gets(s2);
	if( contida(s1, s2) == 1 ) strcpy(verdade_ou_falso, "True");
	printf("%s\n", verdade_ou_falso);
	return 0;
}
