#include <stdio.h>
#include <string.h>

void *newStrnoV(char* s1){
	for(int i=0;*(s1+i) != '\0'; i++){
		while( *(s1+i) == 'a' || *(s1+i) == 'e' || *(s1+i) == 'i' || *(s1+i) == 'o' || *(s1+i) == 'u' || *(s1+i) == 'A' || *(s1+i) == 'E' || *(s1+i) == 'I' || *(s1+i) == 'O' || *(s1+i) == 'U' ){
			for(int j = i;*(s1+j) != '\0';j++){
				*(s1+j) = *(s1+j+1);
			}
			continue;
		}
	}
}

int main(){
	char s1[1000];
	//Yes, I know gets is not secure
	gets(s1);
	newStrnoV(s1);
	printf("without vowels: %s\n", s1);
	return 0;
}
