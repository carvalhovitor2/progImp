#include <stdio.h>

int main(){
	int size, altura, largura;
	printf("Insira a dimensao do quadrado\n");
	scanf("%d", &size);
	largura = size; altura = size;
	while (altura > 0){
		while( largura > 0){
			printf("#");
			largura--;
		} 
		largura = size;
		altura--;
		printf("\n");
	}
	return 0;
}

