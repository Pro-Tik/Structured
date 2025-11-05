#include <stdio.h>

int main(void) {
    int N, x, i;

    if (scanf("%d", &N) != 1) return 0;   // read number of testcases
    // optionally validate N: problem says N < 10000
    if (N < 0) return 0;

    for (i = 0; i < N; ++i) {
        if (scanf("%d", &x) != 1) break;

        if (x == 0) {
            printf("NULL\n");
        } else if (x % 2 == 0) {                  // even
            printf("EVEN %s\n", x > 0 ? "POSITIVE" : "NEGATIVE");
        } else {                                  // odd
            printf("ODD %s\n", x > 0 ? "POSITIVE" : "NEGATIVE");
        }
    }

    return 0;
}
