#include <stdio.h>
#include <string.h>

char* newstrcpy(char* dest, char* src){
	char *inicioDest=dest;
	while(*src){
		*dest=*src;
		*dest++;
		*src++;
	}
	return *inicioDest;
}

int main(){
	char dest[20], src[20];
	gets(dest);
	gets(src);
	printf("%s\n", newstrcpy(dest, src));
	return 0;
}
