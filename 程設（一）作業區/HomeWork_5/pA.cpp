#include<stdio.h>

int main(){
	int str[200000];
	int a;
	int what = 0;
	int total = 0;
	scanf("%d",&a);
	
	for(int i = 0 ; i < a; i ++){
		int g;
		scanf("%d",&g);
		if(g>=40&&g<=60){
			str[i] = 1;
		}else{
			str[i] = 0;
		}
		if(str[i] == 1 && str[i-1] == 0){
			total += 1;
		}
	}
	
	printf("%d",total);
	
	
	return 0;
}
