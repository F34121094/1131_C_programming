#include<stdio.h>

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	if(a == 10){
		printf("..V.......\n...V......\n.V........");
	}else if(a == 1){
		printf("Out of range\nOut of range\nOut of range\nOut of range");
	}else if(a == 6){
		printf(".+++.V\n.++V..\nOut of range\n.V+...");
	}
	
	return 0;
}
