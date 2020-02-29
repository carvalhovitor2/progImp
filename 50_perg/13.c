#include <stdio.h>
#include <string.h>

void truncW(char* s1, int max){
	int flag=0;
	for(int i = 0, numDeLetras = 1; *(s1+i) != '\0'; i++, numDeLetras++, flag = 0){
		while(*(s1+i) != ' ' && *(s1+i) != '\0' && numDeLetras == max){
			for(int j = i;*(s1+j) != '\0';j++){
				*(s1+j) = *(s1+j+1);
                        }
			flag = 1;
		}
		if (flag == 1 || *(s1+i) == ' ' ) numDeLetras = 0;
	}
}

int main(){
	char s1[1000];
	int max=0;
	//Yes, I know gets is not secure
	printf("Insert text\n");
	gets(s1);
	printf("Insert max\n");
	scanf("%d", &max);
	truncW(s1, max+1);
	printf("txt trunked with max of %d: %s\n", max, s1);
	return 0;
}
