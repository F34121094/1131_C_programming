#include<stdio.h>
#include<stdlib.h>
int v_p;
int main(){
	int n , m;
	scanf("%d %d\n",&n,&m);
	char c[n];
	
	for(int i = 0 ; i < n+1 ; i++){
		scanf("%c",&c[i]);
		if(c[i] == 'V'){
			v_p = i;
		}
	}
	
	for(int i = 0 ; i < m ; i++){
		fflush(stdin);
		char d; 
		int s;
		scanf("%c %d",&d,&s);
		if(d == 'L'){
			if(v_p - s < 0){
				printf("Out of range");
			}else{
				c[v_p] = '.';
				c[v_p - s] = 'V';
				v_p -= s;
				printf("%s",c);
				
			}
		}else{
			if(s + v_p > n-1){
				printf("Out of range");
			}else{
				c[v_p] = '.';
				c[s + v_p] = 'V';
				v_p += s;
				printf("%s",c);
			}
		}
	}
	fflush(stdin);
	
	return 0;
}
