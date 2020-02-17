#include <stdio.h>
#include <math.h>


float multInt(float m, int n){
	float a = 0.0;
	if (n >= 1 && ((n % 2) != 0)) a = m + multInt(m*2, n/2);
	else if (n >= 1) a = multInt(m*2, n/2);
	return a;
}

int main(){
	float m=0;
	int n;
	scanf("%fx%d", &m, &n);
	printf("%.2f", multInt(n,m));
	return 0;
}

