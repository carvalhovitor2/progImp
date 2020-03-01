#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int palindrome(char *string){
	int i=0, length;
	char *end=string;
	for(i=0; *(string+i) != '\0'; i++);
	length = i;
	end+=length-1;
	for(i=0;i < length/2;i++, *end--){
		if (*(string+i) != *end) return 0;
	}
	return 1;
}


int main(){
        char string[1000], trueOrFalse[200]="False";
        printf("Insira uma string:\n");
        gets(string);
	if (palindrome(string) == 1) strcpy(trueOrFalse, "True");
	printf("%s\n", trueOrFalse);
	return 0;
}
