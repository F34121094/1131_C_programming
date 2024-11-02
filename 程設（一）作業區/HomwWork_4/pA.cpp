#include <stdio.h>
void bit(unsigned int n){
	for(int i = 31;i>=0;i--){
		printf("%d",(n>>i)&1);
	}
}

int main(){
	int x;
	scanf("%d",&x);
	if (x == 1){
		unsigned int y;
		scanf("%u",&y);
		bit(y);
	}else{
		
		union{
			float a;
			unsigned int b;
		}y;
		scanf("%f",&y.a);
		bit(y.b);
	}
	
	return 0; 
}
