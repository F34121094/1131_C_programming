#include<stdio.h>

int main(){
	int a,b,c;
	scanf("%d-%d-%d",&a,&b,&c);
	int p = (a<b)*50 + (a+b<c)*150 + (a==c)*100 + (a==b && b==c)*300;
	printf("%d\n", p);
	return 0;
}
