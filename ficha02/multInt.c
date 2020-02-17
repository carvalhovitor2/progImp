#include <stdio.h>
#include <math.h>


float multInt(float m, int n){
	float a = 0.0;
	if (n >= 1) a = m + multInt(m, n-1);
	return a;
}

int main(){
	float m=0;
	int n;
	scanf("%fx%d", &m, &n);
	printf("%.2f", multInt(m, n));
	return 0;
}

