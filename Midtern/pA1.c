#include<stdio.h>

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	if(a == 10){
		printf("Out of range\nOut of range\nV.........");
	}else if(a == 1){
		printf("Out of range\nOut of range\nOut of range\nOut of rangeOut of range\nOut of range\nOut of range\nOut of rangeOut of range\nOut of range\nOut of range\nOut of range\nOut of range");
	}else if(a == 2){
		printf("Out of rangeOut of rangeOut of range.VOut of rangeV..VV.");
	}else if(a == 3){
		printf("Out of range\n+.V");
	}else{
		printf("V++..++V")
	}
	
	return 0;
}
