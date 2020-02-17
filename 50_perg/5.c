#include <stdio.h>
#include <math.h>
#include <string.h>



int trailingZ (unsigned int n){
	unsigned int count = 0;
	for(int i=1, j=1; !(n & i); i+=pow(2,j), j++, count++){}	
	return count;
}

int whileTrailingZ(unsigned int n){
	unsigned int count = 0;
	int i=1, j=1;
	while(!(n & i)){
		i+=pow(2,j);
	       	j++;
		count++;	
	}
	return count;
}

int main(){
	int a;
	printf("Insira um numero inteiro:\n");
	scanf("%d", &a);
	printf("trailing zeros em %d: %d\n", a, trailingZ(a));
	printf("While trailing zeros em %d: %d\n", a, whileTrailingZ(a));
	return 0;
}
