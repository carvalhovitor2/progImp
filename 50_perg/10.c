#include <stdio.h>
#include <string.h>

char *newstrstr(char* s1, char* s2){
	int count2=0;
	while(*s1 != '\0'){
		while (*s1 == *s2){
			*s1++;
			*s2++;
			count2++;
			if(*s2 == '\0') return s1-count2;
		}
		*s2-=count2;
		count2=0;
		if(!(count2 > 0))*s1++;
	}
	return NULL;
}

int main(){
	char s1[100], s2[100];
	//Yes, I know gets is not secure
	gets(s1);
	gets(s2);
	printf("First occurence of %s in %s is in %s\n", s2, s1, newstrstr(s1, s2));
	return 0;
}
