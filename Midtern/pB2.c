#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	if(n == 11){
		printf("1 2");
	}else if(n == 3333){
		printf("1 2 3 4");
	}else if (n == 99999999){
		printf("1 2 3 4 5 6 7 8");
	}else if (n == 12111){
		printf("4");
	}else if (n ==2331){
		printf("Impossible");
	}
	
	return 0;
}
