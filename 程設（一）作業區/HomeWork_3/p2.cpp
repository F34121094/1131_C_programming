#include<stdio.h>

int main(){
	int s[] = {1,2,3};
	int a, b, c;
	int yn = 0;
	scanf("%d %d %d",&a,&b,&c);
	int time = 0;
	for (int i=0; i<3;i++){
		if (s[i] == a || s[i] == b || s[i] == c){
			continue;
		}
		if (time == 0){
			printf("%d",s[i]);
			time++;
		}else{
			printf(" %d",s[i]);
		}
		yn = 1;
	}
	if (yn == 0){
		printf("Oh, Fried Shrimp, you're amazing!");
	}
	
	printf("\n");
	return 0;
}
