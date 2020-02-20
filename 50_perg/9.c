#include <stdio.h>
#include <string.h>

int newstrcmp(char* string1, char* string2){
	while(*string1 == *string2){
		*string1++;
		*string2++;
	}
	if (*string1 > *string2) return 1;
	if (*string1 < *string2) return -1;
	return 0;
}

int main(){
	char string1[20], string2[20];
	gets(string1);
	gets(string2);
	printf("minha: %d --- strcmp: %d\n", newstrcmp(string1, string2), strcmp(string1, string2));
	return 0;
}
