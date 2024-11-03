#include <stdio.h>
#include <math.h>

int main() {
    unsigned int x;
    scanf("%u", &x);

    // �����Ÿ��B���ƩM����
    int sign = (x >> 31) & 1;  // ����Ÿ���
    int exponent = (x >> 23) & 0xFF; // ������Ʀ�
    int mantissa = x & 0x7FFFFF; // ������Ʀ�

    // �վ�Ÿ�
    double finalSign = (sign == 0) ? 1.0 : -1.0;

    // �B�z���ơ]��h�����q127�^
    int E = exponent - 127;

    // �p�����
    double Man = 1.0; // �q�����e��1�}�l
    for (int i = 0; i < 23; i++) {
        Man += ((mantissa >> (22 - i)) & 1) * pow(2, -(i + 1));
    }

    // �p��B�I��
    double result = finalSign * Man * pow(2.0, E);
    
    // �H��ǰO�ƪk���L���G
    printf("%.23e\n", result);
    return 0;
}
