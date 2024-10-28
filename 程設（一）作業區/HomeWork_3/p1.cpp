#include<stdio.h>
#include<math.h>

int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int total = floor(b/a);
	int last = b - total*a;
	int leftorright = (total)%2==0 ? 0:1;	//0¥Ñ¥ª¨ì¥k 
	if (leftorright == 0 && last >= c){
		total ++;
	}else if(leftorright ==1 && last >= a+1-c){
		total ++;
	}
	printf("%d\n",total);
	
	return 0;
	
}
