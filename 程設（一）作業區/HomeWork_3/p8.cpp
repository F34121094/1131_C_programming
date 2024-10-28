#include <stdio.h>

int main()
{
    long long a,b;
    scanf("%lld%lld",&a,&b);
    if(a == -9223372036854775808 && b == -9223372036854775808){
    	printf("-18446744073709551616\n");
	}else{
		if((a<0&&b>0) || (a>0&&b<0)){
    	printf("%lld\n",a+b);
		}else{
			if((a<0&&b<0&&a+b>0) || (a>0&&b>0&&a+b<0)){
				if(a<0){
					printf("-%llu\n",-a + (-b));
				}else{
					printf("%llu\n",a+b);
				}
			}else{
				printf("%lld\n",a+b);
			}
		}	
	}
    
    return 0;
}
