#include<stdio.h>

int main(){
	int total;
	int goal;
	int time = 0;
	scanf("%d",&goal);
	while(1){
		time ++;
		int add;
		scanf("%d",&add);
		total += add;
		if(total > goal){
			break;
		}
	}
	printf("Fried Pork!!!!\n");
	printf("%d\n",time);
	
	return 0;
}
