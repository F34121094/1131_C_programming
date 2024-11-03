#include <stdio.h>
#include <math.h>

int main() {
    unsigned int x;
    scanf("%u", &x);

    // 提取符號、指數和尾數
    int sign = (x >> 31) & 1;  // 獲取符號位
    int exponent = (x >> 23) & 0xFF; // 獲取指數位
    int mantissa = x & 0x7FFFFF; // 獲取尾數位

    // 調整符號
    double finalSign = (sign == 0) ? 1.0 : -1.0;

    // 處理指數（減去偏移量127）
    int E = exponent - 127;

    // 計算尾數
    double Man = 1.0; // 從隱式前導1開始
    for (int i = 0; i < 23; i++) {
        Man += ((mantissa >> (22 - i)) & 1) * pow(2, -(i + 1));
    }

    // 計算浮點數
    double result = finalSign * Man * pow(2.0, E);
    
    // 以科學記數法打印結果
    printf("%.23e\n", result);
    return 0;
}
