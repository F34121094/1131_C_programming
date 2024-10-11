#include <stdio.h>

int main(){
	float x;
	scanf("%f",&x);
	if (x <= 1){
		printf("Calm\n");
	}
	else if (2 <= x && x <= 5){
		printf("Light air\n");
	}
	else if (5 <= x && x <= 49){
		printf("Breeze\n");
	}
	else if (50 <= x && x <= 61){
		printf("High wind\n");
	}
	else if (62 <= x && x <= 88){
		printf("Gale\n");
	}
	else if (89 <= x && x <= 117){
		printf("Storm\n");
	}else{
		printf("Hurricane\n");
	}
	
	return 0;
} 
