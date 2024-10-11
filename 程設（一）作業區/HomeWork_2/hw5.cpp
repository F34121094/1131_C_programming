#include <stdio.h>

int main(){
	char ac[100],bc[100],cc[100],dc[100];
	int a,b,c,d;
	long long e;
	scanf("NCKU%d%c%d%c%d%c%d%c%d",&a,&ac,&b,&bc,&c,&cc,&d,&dc,&e);
	printf("\"%d\" \"%d\" \"%d\" \"%d\" \"%d\"\n",a,b,c,d,e);
	//ll可以用來輸出超大int 
	return 0;
}
