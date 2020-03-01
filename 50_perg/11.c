#include <stdio.h>
#include <string.h>

void *newstrrev(char* s1){
	int length=0, i=0;
	char *begin=s1, *end=s1, aux;
	while(*end != '\0'){
		end++;
	}

	length = end - s1;
	end --;
	for(i = 0; i < length/2 ; i++, *begin++, *end--){
		aux=*end;
		*end = *begin;
		*begin = aux;
	}
	return begin-i;
}

int main(){
	char s1[100], s2[100];
	//Yes, I know gets is not secure
	gets(s1);
	newstrrev(s1);
	printf("reversed: %s\n", s1);
	return 0;
}
