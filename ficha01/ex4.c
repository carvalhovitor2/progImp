#include <stdio.h>


void horizontal(int size){
	int i, j=0, k=0;
	for( i = size;i>=0;i--){
		while( j <= (i - 1)){
			printf(" ");
			j++;
		}
		while( k <= (size - i)){
			printf("#");
			k++;
		}
		k = 0;
		while( k <= (size - (i+1))){
			printf("#");
			k++;
		}

		printf("\n");
		j = 0;
		k = 0;
	}
}

void vertical(int size){
	int i, j=1, k=0;
	for( i = 1;i<=size;i++){
		while(j <= i){
			printf("#");
			j++;
		}
		j=1;
		printf("\n");
	}
	j=0;
	for( i = size-1;i>=0;i--){
		while ( j < i){
			printf("#");
			j++;
		}
		j=0;
		printf("\n");
	}

}


int main(){
	int size;
	printf("Escreva a altura do triangulo\n");
	scanf("%d", &size);
	horizontal(size-1);
	printf("\n");
	vertical(size);
	return 0;
}
