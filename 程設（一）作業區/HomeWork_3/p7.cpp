#include <stdio.h>

int main()
{
    long long a,b;
    scanf("%lld%lld",&a,&b);
    if((a<0&&b>0) || (a>0&&b<0)){
    	printf("No\n");
	}else{
		if((a<0&&b<0&&a+b>0) || (a>0&&b>0&&a+b<0)){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}
    
    return 0;
}
