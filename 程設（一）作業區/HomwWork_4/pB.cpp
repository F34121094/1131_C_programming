#include<stdio.h>
#include<math.h>

int main(){
	char str[33],str_1[2],str_2[9],str_3[24];
	unsigned int x;
	int sign;
	scanf("%u",&x);
	printf("%u\n",x);
	int j =0;
	for(int i = 31;i>=0;i--){
		str[j++] = (x>>i) & 1?'1':'0';
	}
	str[32] = '\0';
	
	if (str[0] == '0'){
		sign = 1;
	}else{
		sign = -1;
	}
	//取 sign 完成
	 
	for(int i = 1; i < 9;i++){
		str_2[i-1] = str[i];
	}
	str_2[8] = '\0';
	for(int i = 9; i <32 ; i++){
		str_3[i- 9] = str[i];
	}
	str_3[23] = '\0';
	//完成字串的分割
	
	int E = 0;
	int time = 1;
	for(int i = 7 ;i>=0 ;i--){
		if(str_2[i] == '1'){
			E += time;
		}
		time *= 2;
	} 
	E -= 127;
	//取 E 完成 
	
	double Man = 0.0;
	double cou = 0.5;
	for(int i = 0; i <23;i++){
		if(str_3[i] == '1'){
			Man += cou;
		}
		cou /= 2.0;
	}
	Man += 1.0;
	
	printf("%.23e\n",(double)sign * Man * pow(2.0,(double)E));
	return 0;
}
