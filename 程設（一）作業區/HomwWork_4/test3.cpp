#include <stdio.h>
#include <math.h>

int main() {
    char str[33], str_2[9], str_3[24];
    unsigned int x;
    int sign;

    // �Ω��J unsigned int ���榡�A�o�� x ��� IEEE 754 ���줸��ܪk
    scanf("%u", &x);

    int j = 0;
    for (int i = 31; i >= 0; i--) {
        str[j++] = (x >> i) & 1 ? '1' : '0';
    }
    str[32] = '\0';  // �[�J�r�굲���Ÿ�

    // �T�w�Ÿ���
    sign = (str[0] == '0') ? 1 : -1;

    // ���X exponent ����
    for (int i = 1; i < 9; i++) {
        str_2[i - 1] = str[i];
    }
    str_2[8] = '\0';

    // ���X���Ƴ���
    for (int i = 9; i < 32; i++) {
        str_3[i - 9] = str[i];
    }
    str_3[23] = '\0';

    // �p����� E ����
    int E = 0;
    int time = 1;
    for (int i = 7; i >= 0; i--) {
        if (str_2[i] == '1') {
            E += time;
        }
        time *= 2;
    }
    E -= 127;

    // �p����� M ����
    double Man = 0.0;
    double cou = 0.5;
    for (int i = 0; i < 23; i++) {
        if (str_3[i] == '1') {
            Man += cou;
        }
        cou /= 2.0;
    }
    Man += 1.0;

    // ��X���G
    printf("%.23e\n", (double)sign * Man * pow(2.0, (double)E));
    return 0;
}
