#include <stdio.h>
#include <string.h>

int newstrcmp(char* string1, char* string2){
	while(*string1 != '\0' && *string1 == *string2){
		printf("s1: %c, s2: %c\n", *string1, *string2); 
		*string1++;
		*string2++;
	}
//	printf("s1: %c, s2: %c", *string1, *string2); 
	if ( *string1 == '\0' && *string2 == '\0' ) return 0;
	if (*string1 > *string2) return 1;
	if (*string1 < *string2) return -1;
}

int main(){
	char string1[20], string2[20];
	gets(string1);
	gets(string2);
	printf("minha: %d --- strcmp: %d\n", newstrcmp(string1, string2), strcmp(string1, string2));
	return 0;
}
