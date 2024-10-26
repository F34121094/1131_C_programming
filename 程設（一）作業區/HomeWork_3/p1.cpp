#include<stdio.h>

int main(){
	int a, b, c ;
	scanf("%d %d %d",&a,&b,&c);
	int rl=1; //1¥Ñ¥ª¨ì¥k 
	int q = b/a;
	if (q%2 == 1){
		rl = 2;
	}else{
		rl = 1;
	}
	int last = a % b;
	if (rl == 1){
		if (last >= c){
		q += 1;
		}
	}else{
		if (last >= (a-c+1)){
			q += 1;
		}
	}
	printf("%d",q);
	
	return 0;
}
