#include <stdio.h>
#include <math.h>

int main() {
    char str[33], str_2[9], str_3[24];
    unsigned int x;
    int sign;

    // 用於輸入 unsigned int 的格式，這裡 x 表示 IEEE 754 的位元表示法
    scanf("%u", &x);

    int j = 0;
    for (int i = 31; i >= 0; i--) {
        str[j++] = (x >> i) & 1 ? '1' : '0';
    }
    str[32] = '\0';  // 加入字串結尾符號

    // 確定符號位
    sign = (str[0] == '0') ? 1 : -1;

    // 取出 exponent 部分
    for (int i = 1; i < 9; i++) {
        str_2[i - 1] = str[i];
    }
    str_2[8] = '\0';

    // 取出尾數部分
    for (int i = 9; i < 32; i++) {
        str_3[i - 9] = str[i];
    }
    str_3[23] = '\0';

    // 計算指數 E 的值
    int E = 0;
    int time = 1;
    for (int i = 7; i >= 0; i--) {
        if (str_2[i] == '1') {
            E += time;
        }
        time *= 2;
    }
    E -= 127;

    // 計算尾數 M 的值
    double Man = 0.0;
    double cou = 0.5;
    for (int i = 0; i < 23; i++) {
        if (str_3[i] == '1') {
            Man += cou;
        }
        cou /= 2.0;
    }
    Man += 1.0;

    // 輸出結果
    printf("%.23e\n", (double)sign * Man * pow(2.0, (double)E));
    return 0;
}
