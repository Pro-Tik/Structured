//https://judge.beecrowd.com/en/problems/view/1165

#include <stdio.h>
#include <math.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int a;
        scanf("%d", &a);

        if (a == 1) {
            printf("Not Prime\n");
            continue;
        }

        int isPrime = 1; // assume prime
        for (int j = 2; j * j <= a; j++) {
            if (a % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d eh primo\n",a);
        } else {
            printf("%d nao eh primo\n",a);
        }
    }

    return 0;
}
