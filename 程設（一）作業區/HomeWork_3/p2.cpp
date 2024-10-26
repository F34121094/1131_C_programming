#include<stdio.h>

int main(){
	int s[] = {1,2,3};
	int a, b, c;
	bool yn = 0;
	scanf("%d %d %d",&a,&b,&c);
	for (int i=0; i<3;i++){
		if (s[i] == a || s[i] == b || s[i] == c){
			continue;
		}
		printf("%d ",s[i]);
		yn = 1;
	}
	if (yn == 0){
		printf("Oh, Fried Shrimp, you're amazing!");
	}
	return 0;
}
