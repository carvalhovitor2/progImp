#include <stdio.h>
#include <string.h>

void newstrcmp(char *string1, char* string2){
	while(*string1 != '\0'){
		printf("%c", *string1++);
	}
	printf("%s", string2);

}


int main(){
	char string1[20], string2[20];
	char *p, *p1;;
	fgets(string1, 20, stdin);
	fgets(string2, 20, stdin);

	p=string1;
	p1=string2;
	void newstrcmp(p, p1);
	return 0;
}
