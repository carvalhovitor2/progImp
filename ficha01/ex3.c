#include <stdio.h>

int main(){
	int size, total;
	printf("Insira a dimensao do tabuleiro\n");
	scanf("%d", &size);
	total = size*size;
	while ( total > 0 ){
		putchar('#');
		total--;
		if(total == 0){printf("\n");return 0;}
		if(total % size == 0){printf("\n");}
		putchar('_');
		total--;
		if(total % size == 0){printf("\n");}	
	}
	printf("\n");
	return 0;
}

