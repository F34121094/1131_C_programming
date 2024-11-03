#include<stdio.h>

int main(){
	unsigned int x;
	scanf("%u",&x);
	
	float *y;
	y = (float*) &x;
	printf("%.23e", *y);
	
	return 0;
}
