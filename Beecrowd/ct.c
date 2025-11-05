#include <stdio.h>
int main() {
    int a=5, b=2, c,d,e,f,g,h;

    c = a++;    // post-increment → c=5, then a=6
    d = --b;    // pre-decrement → b=1, d=1
    e = a;      // e=6
    f = b--;    // post-decrement → f=1, then b=0
    g = a + b;  // g = 6 + 0 = 6
    g = g--;    // tricky:
                // RHS = g (6), assign to g
                // then decrement (g becomes 5 internally)
                // BUT assignment overwrites → g=6
    printf("%d\n", a);  // 6
    printf("%d\n", b);  // 0
    printf("%d\n", c);  // 5
    printf("%d\n", d);  // 1
    printf("%d\n", e);  // 6
    printf("%d\n", f);  // 1
    printf("%d\n", g);  // 6
    return 0;
}