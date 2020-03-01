#include <stdio.h>

//Repare que essa funcao eh identica a anterior (24.c ) so que ao inves de remover iguais consecutivos, remove iguais consecutivos DESDE QUE SEJAM O CHAR ESPACO.
int limaEspacos(char *string){
	int novoComprimento=0;
	while(*string){
		//Unica modificacao a anterior foi acrescentar uma condicao aqui. Esta condicao eh o char ser igual ao sucessor e igual ao char ' ' (espaco)
		while( *string == ' ' && *string == *(string+1) && *string != '\0'){
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
	printf("O comprimento da string resultante eh: %d\n", limaEspacos(string));
	printf("A nova string eh: %s\n", string);
	return 0;
}
