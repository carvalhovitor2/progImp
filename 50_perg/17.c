#include <stdio.h>


int maiorPref(char *s1, char *s2){
	int maiorPref=0;
	while(*s1 == *s2 && *s1 != '\0'){
		maiorPref++;
		*s1++;
		*s2++;
	}
	return maiorPref;
}


int main(){
	char s1[1000], s2[1000];
	printf("Insira uma string:\n");
	gets(s1);
	printf("Insira outra string:\n");
	gets(s2);
	printf("O comprimento do maior prefixo comum entre as duas strings fornecidas eh: %d\n", maiorPref(s1, s2));
	return 0;
}
