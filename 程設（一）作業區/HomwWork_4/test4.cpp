#include <stdio.h>
#include <string.h>

int main() {
    char binaryStr[33];  // �Ω�s�x�G�i��r��
    unsigned int N;

    // Ū����� N
    printf("Enter an integer (as binary string): ");
    scanf("%s", binaryStr);

    // �N�G�i��r���ഫ���L�Ÿ����
    N = strtoul(binaryStr, NULL, 2);

    // �N�L�Ÿ���Ƶ��� float
    float floatValue = *(float*)&N;

    // �H %f �榡���L�X�B�I��
    printf("Float value: %f\n", floatValue);

    return 0;
}
