#include <stdio.h>


char* concat(char *str1, char *str2){
	int count=0;
		while (*str1){
			*str1++;
			count++;
		}
		while(*str2){
			*str1=*str2;
			*str2++;
			*str1++;
			count++;
		}
		return str1-count;
}

int main(){
	char string1[50], string2[50];
	printf("Insert first string:\n");
	gets(string1);
	printf("Insert second string:\n");
	gets(string2);
	printf("Concatenating both strings: %s\n", concat(string1, string2));
	return 0;
}
