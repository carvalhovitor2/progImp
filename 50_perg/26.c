#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_SIZE 10

void print_array(int *ptr, int dim){

        printf("{ ");
        for(int i=0;i<dim;i++){
                if(i==dim-1){
                        printf("%d ", *(ptr+i));
                        break;
                }
                printf("%d, ", *(ptr+i));
        }
        printf("}\n");
}

void insere(int *v, int dim, int x){
	int flag = 0, i = 0, aux, pos_retirada;
	v = realloc(v, (dim+1) * sizeof(int));
	while( x > *(v + i) && i < dim){
		i++;
	}
	aux = *( v + i );
	*( v + i) = x;
	pos_retirada=i+1;
	i++;
	while( i < dim ){
		*(v + i + 1) = *(v + i);
		i++;
	} 
	*(v + pos_retirada ) = aux;
}

int main(){
	int *v, dim, x;
	printf("Insira a dimensao do vector\n");
	scanf("%d", &dim);
	v = (int*) malloc(dim * sizeof(int));
       	printf("Insira os numeros do vetor\n");	
	for(int i = 0; i < dim ; i++)scanf("%d", (v+i));
       	printf("agora insira o elemento que quer inserir no vetor\n");	
	scanf("%d", &x);
	insere(v, dim, x);
	print_array(v, dim+1);
	return 0;
}
