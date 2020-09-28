#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    int i;
    int j;
    int k;

    a = 8 << 1; // 1000 shifted to the left one is 0001 0000 or 16
    b = 15 << 1; // 1111 shifted to the left one is 0001 1110 or 30
    c = 1 << 1; // 0001 shifted to the left one is 0010 or 2
    d = 33 << 1; // 0010 0001 shifted to the left one is 0100 0010 or 66

    e = 1 | 0; // 1
    f = 1 & 0; // 0

    g = 10; // 1010
    h = 15; // 1111
    i = 10 | 15; // 1010 | 1111 = 1111 or 15
    j = 10 & 15; // 1010 & 1111 = 1010 or 10

    k = 15 >> 3; // 1111 shifted to the right 3 is 1;

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", e);
    printf("%d\n", f);
    printf("%d\n", i);
    printf("%d\n", j);
    printf("%d\n", k);
    return 0;
}