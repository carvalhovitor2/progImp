#include <stdio.h>
#include <string.h>

int contaVogais(char* s1){
	int vogais=0;
	for(int i=0;*(s1+i) != '\0'; i++){
		while( *(s1+i) == 'a' || *(s1+i) == 'e' || *(s1+i) == 'i' || *(s1+i) == 'o' || *(s1+i) == 'u' || *(s1+i) == 'A' || *(s1+i) == 'E' || *(s1+i) == 'I' || *(s1+i) == 'O' || *(s1+i) == 'U' ){
			for(int j = i;*(s1+j) != '\0';j++){
				*(s1+j) = *(s1+j+1);
			}
			vogais++;
			continue;
		}
	}
	return vogais;
}

int main(){
	char s1[100], s2[100];
	//Yes, I know gets is not secure
	gets(s1);
	printf("A string inserida tem %d vogais\n", contaVogais(s1));
	return 0;
}
