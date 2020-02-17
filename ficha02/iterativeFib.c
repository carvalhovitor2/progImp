#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int seq[9999], elem;
	seq[0] = 0;
	seq[1] = 1;
	for(int i=2; i<9999; i++){
		seq[i] = seq[i-1] + seq[i-2];
	}
	printf("Insert the desired element of the fibonacci sequence:\n");
	scanf("%d", &elem);
	printf("Por iteracao, o elemento eh:%d\n", seq[elem+1]);
	return 0;
}
