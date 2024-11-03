#include <stdio.h>
#include <string.h>

int main() {
    char binary_str[33]; // �ΨӦs�� 32-bit �G�i��r��]32 �Ӧr�� + ������ '\0'�^
    unsigned int N = 0;

    printf("Enter a 32-bit binary number: ");
    scanf("%32s", binary_str); // Ū���@�� 32-bit ���G�i��r��

    // �N�G�i��r���ഫ�� unsigned int
    for (int i = 0; i < 32; i++) {
        N = (N << 1) | (binary_str[i] - '0'); // �N�C�@��[�J N
    }

    // �ϥ� union �Ӹ�Ū�o�Ӿ�Ƨ@���B�I��
    union {
        unsigned int i;
        double f;
    } u;

    u.i = N; // �N��ƭȽ�ȵ� union ������Ʀ���

    // ��X�B�I�ƪ��ȡA�ϥά�ǰO�ƪk��ܨ�p���I�� 23 ��
    printf("Output: %.23e\n", u.f);

    return 0;
}
