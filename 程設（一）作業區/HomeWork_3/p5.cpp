#include<string.h>
#include<stdio.h>

int main(){
	char str1[50],str2[50],str3[50];
	scanf("%s%s",str1,str2);
	int l = strlen(str1);
	for (int i = 0;i<l;i++){
		str3[l-i-1] = str1[i];
	}
	str3[l] = '\0';
	strcat(str2,str3);
	printf("%s\n",str2);
	
	return 0;
}
