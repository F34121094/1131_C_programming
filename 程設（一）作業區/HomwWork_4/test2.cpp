#include <stdio.h>
#include <string.h>

int main() {
    char binary_str[33]; // 用來存放 32-bit 二進位字串（32 個字符 + 結尾的 '\0'）
    unsigned int N = 0;

    printf("Enter a 32-bit binary number: ");
    scanf("%32s", binary_str); // 讀取一個 32-bit 的二進位字串

    // 將二進位字串轉換成 unsigned int
    for (int i = 0; i < 32; i++) {
        N = (N << 1) | (binary_str[i] - '0'); // 將每一位加入 N
    }

    // 使用 union 來解讀這個整數作為浮點數
    union {
        unsigned int i;
        double f;
    } u;

    u.i = N; // 將整數值賦值給 union 中的整數成員

    // 輸出浮點數的值，使用科學記數法顯示到小數點後 23 位
    printf("Output: %.23e\n", u.f);

    return 0;
}
