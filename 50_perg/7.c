#include <stdio.h>


char* concat(char *str1, char *str2){
		while (*str1){
			printf("%c", str1);
			*str1++;
		}
		*str1 = *str2;
		return *str1;
}

int main(){

	char string1[50], string2[50];
	gets(string1);
	gets(string2);
	char *a = string1, *b = string2;
	concat(*a, *b);
	puts(string1);	
	return 0;
}
