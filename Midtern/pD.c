#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	unsigned long long work[n][n];
	for(int i = 0 ; i < n ; i++){
		for(int j  = 0 ; j < n ; j++){
			scanf("%llu",&work[i][j]);
		}
	}
	unsigned long long max,max_[6];
	int time;
	switch(n){
		case 1:
			printf("1");
			break;
		case 2:
			if(work[0][0] + work[1][1] > work[0][1] + work[1][0]){
				printf("1 2");
			}else{
				printf("2 1");
			}
			break;
		
		case 3:
			max_[0] = work[0][0] + work[1][1] + work[2][2];
			max_[1] = work[0][0] + work[1][2] + work[2][1];
			max_[2] = work[0][1] + work[1][0] + work[2][2];
			max_[3] = work[0][1] + work[1][2] + work[2][0];
			max_[4] = work[0][2] + work[1][0] + work[2][1];
			max_[5] = work[0][2] + work[1][1] + work[2][0];
			max = max_[0];
			time = 0;
			for(int i = 1 ; i < 6 ; i++){
				if(max < max_[i]){
					max = max_[i];
					time = i;
				}
			}
			switch(time){
				case 0:
					printf("1 2 3");
					break;
				case 1:
					printf("1 3 2");
					break;
				case 2:
					printf("2 1 3");
					break;
				case 3:
					printf("2 3 1");
					break;
				case 4:
					printf("3 1 2");
					break;
				case 5:
					printf("3 2 1");
					break;
			}
			break;
	}
	
	return 0;
} 
