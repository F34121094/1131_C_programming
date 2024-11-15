#include<stdio.h>
int test(int n){
	if(n <= 3){
		return 1;
	}else{
		for(int i = 2 ; i < n ; i++){
			if(n % i == 0){
				return 0;
			}
		}
		return 1;
	}
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i = 2 ; i < n/2 + 1; i++){
		int a,b;
		a = i;
		b = n - i;
		if(test(a) &&test(b)){
			printf("%d %d",a,b);
			break;
		}
	}
	
	return 0;
}
