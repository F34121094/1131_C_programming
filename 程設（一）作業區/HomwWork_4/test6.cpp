#include <stdio.h>

union IntFloat {
    unsigned int i;  // 32-bit integer
    float f;        // 32-bit float
};

int main() {
    union IntFloat u;
    unsigned int N;

    // Input: read an integer
    printf("Enter an integer: ");
    scanf("%u", &N);

    // Store the integer value in the union
    u.i = N;

    // Output: treat the integer as a float and print it
    printf("Float value: %f\n", u.f);

    return 0;
}
