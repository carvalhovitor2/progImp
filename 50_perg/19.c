#include <stdio.h>


int sufPref(char *s1, char *s2){
	int sufPref=0, length, i=0, flag=0, j=0;
	//Getting length of s1
	for(i = 0; *(s1+i) != '\0'; i++);
	length = i;


	for(i = length; i > 0; i--, j=0, sufPref=0, *s1++){
		while( *(s1+j) == *(s2+j) && *(s1+j) != '\0' ){
			j++;
			sufPref++;
		}
		if(*(s1+j) == '\0'){
			break;
		}
				
	}	

	
	
	return sufPref;
}


int main(){
	char s1[1000], s2[1000];
	printf("Insira uma string:\n");
	gets(s1);
	printf("Insira outra string:\n");
	gets(s2);
	printf("O comprimento do maior sufixo de s1 que eh prefixo de s2 eh: %d\n", sufPref(s1, s2));
	return 0;
}
