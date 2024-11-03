#include <stdio.h>
#include <string.h>

int main() {
    char binaryStr[33];  // 用於存儲二進制字串
    unsigned int N;

    // 讀取整數 N
    printf("Enter an integer (as binary string): ");
    scanf("%s", binaryStr);

    // 將二進制字串轉換為無符號整數
    N = strtoul(binaryStr, NULL, 2);

    // 將無符號整數視為 float
    float floatValue = *(float*)&N;

    // 以 %f 格式打印出浮點數
    printf("Float value: %f\n", floatValue);

    return 0;
}
