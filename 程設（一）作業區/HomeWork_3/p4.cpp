#include<stdio.h>
#include<string.h>

int main(){
	char data[50],re[50];
	scanf("%s",data);
	int l = strlen(data);
	for(int i = 0 ;i < l;i++){
		re[l-1-i] = data[i];
	}
	int i = 0;
	while (1){
		if(re[i] == '0'){
			i++;
		}else{
			break;
		}
	}
	for(i;i<l;i++){
		printf("%c",re[i]);
	}
	
	return 0;
}
