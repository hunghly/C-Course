#include <stdio.h>
// #include <string.h>

int main(void) {
    char multiple[] = {15L, 25L, 35L, 45L};
    char *p = multiple;

    printf("sizeof multiple is %d\n", (int) sizeof(multiple));
    printf("sizeof multiple[0] is %d\n", (int) sizeof(multiple[0]));
    for (int i = 0; i < sizeof(multiple)/sizeof(multiple[0]); ++i) {
        printf("address p+%d (&multiple[%d]):%llu *(p+%d) value:%d\n",
        i, i, (unsigned long long)(p+i), i, *(p+i));
    }
    printf("\n Type long occupies: %d bytes\n", (int) sizeof(long));
    return 0;
}