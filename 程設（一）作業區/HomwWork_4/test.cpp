#include<stdio.h>
//要將 32 bits 轉換成 float 
int main(){
	float f = 0.1;
	int *i;
	i = (int*) &f;
	printf ("%d\n\n", *i);
	
	int a = 8388608;
	float *b;
	b = (float*) &a;
	printf("%f",*b);
}
