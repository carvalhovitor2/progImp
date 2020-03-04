#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define GENERIC_MAX(x, y) ((x) > (y) ? (x) : (y))
#define ENSURE_int(i)   _Generic((i), int:   (i))
#define ENSURE_float(f) _Generic((f), float: (f))
#define MAX(type, x, y) \
  (type)GENERIC_MAX(ENSURE_##type(x), ENSURE_##type(y))

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

void merge(int r[], int a[], int b[], int na, int nb){
	int iteradorA=0, iteradorB=0, iteradorR=0;
	while( iteradorR < (na + nb)){
		if( *(a + iteradorA) < *(b + iteradorB) && (iteradorA < na)){
			*(r + iteradorR) = *(a + iteradorA);
			iteradorR++; iteradorA++;
		}
		else{
			*(r + iteradorR) = *(b + iteradorB);
			iteradorR++; iteradorB++;
		}
	}
	*( r + iteradorR - 1) = MAX( int, *(a + iteradorA), *(b + iteradorB));
}

int main(){
	int *a, *b, *r, dimA, dimB;
	printf("Insira a dimensao do vector\n");
	scanf("%d", &dimA);
	a = (int*) malloc(dimA * sizeof(int));
       	printf("Insira os numeros do vetor\n");	
	for(int i = 0; i < dimA ; i++)scanf("%d", (a+i));
	printf("Insira a dimensao do outro vector\n");
	scanf("%d", &dimB);
	b = (int*) malloc(dimB * sizeof(int));
       	printf("Insira os numeros do outro vetor\n");	
	for(int i = 0; i < dimB ; i++)scanf("%d", (b+i));
	r = (int*) malloc((dimB + dimA) * sizeof(int));
	merge(r, a, b, dimA, dimB);
	print_array(r, dimA+dimB);
	return 0;
}
