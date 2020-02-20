#include <stdio.h>
#include <string.h>

char* newstrcpy(char* dest, char* src){
	char *inicioDest=dest;
	while(*src != '\0'){
		*dest=*src;
		*dest++;
		*src++;
	}
	return inicioDest;
}

int main(){
	char dest[100], src[100];
	//Yes, I know gets is not secure
	gets(dest);
	gets(src);
	printf("%s\n", newstrcpy(dest, src));
	return 0;
}
