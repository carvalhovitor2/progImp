#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int crescente(int *a, int i, int j){
//	if( i > j || (sizeof(a) / sizeof(int)) < j){
//		printf("Specify a valid interval\n");
//		return 0;
//	}
	a += i;
	printf("dif: %d\na = %d\n", (j - i), *a);
	for(int iterador=0; iterador < (j - i); iterador++, a++){
		printf("%d e %d\n", *a, *(a++));
		if (*a < *(a++))return 0;
	}
	return 1;
}
int main(){
	int a[20], i=1, j=5;
	for(int k=0; k<20;k++)a[i]=i;
	a[3] = 278;
	printf("%d", crescente(a, i, j));
	return 0;
}
