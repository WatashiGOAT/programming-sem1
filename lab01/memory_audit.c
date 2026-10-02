#include <stdio.h>

int main(void) {
    printf("--- SIZEOF TYPES (in bytes) ---\n");
    printf("char:      %zu bytes\n", sizeof(char));
    printf("short:     %zu bytes\n", sizeof(short));
    printf("int:       %zu bytes\n", sizeof(int));
    printf("long:      %zu bytes\n", sizeof(long));
    printf("long long: %zu bytes\n", sizeof(long long));
    printf("float:     %zu bytes\n", sizeof(float));
    printf("double:    %zu bytes\n", sizeof(double));
    printf("void*:     %zu bytes\n\n", sizeof(void*));

    printf("--- INTEGER OVERFLOW DEMO ---\n");
    unsigned char byte_test = 255;
    printf("Initial byte_test: DEC = %u, HEX = 0x%02X\n", byte_test, byte_test);

    byte_test = byte_test + 1;
    printf("After byte_test + 1: DEC = %u, HEX = 0x%02X (Overflow!)\n", byte_test, byte_test);

    return 0;
}