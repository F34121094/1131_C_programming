#include<stdio.h>
#include<math.h>
char num[1000000000];
int main(){
	int time = 0;
	while(1){
		scanf("%c",&num[time]);
		if(num[time] == '\n') break;
		time ++;
	}
	num[time] = '\0';
	//得到 time 是幾位數 
	
	int yes = 1;
	int none = 0;
	for(int i = 0 ; i < time ; i++){
		yes = 1;
		for(int j = 0 ; j < time/2 ;j ++){
			int a,b;
			int for_a,for_b;
			for_a = j;
			for_b = time - j - 1;
			if(for_a >= i){
				for_a ++;
			}
			if(for_b <= i){
				for_b --;
			}
			a = num[for_a];
			b = num[for_b];
			if(a!=b){
				yes = 0;
				break;
			}
		}
		if(yes){
			none = 1;
			printf("%d ",i+1);
		}
	}
	if(none == 0){
		printf("Impossible");
	}
	
	return 0;
} 
