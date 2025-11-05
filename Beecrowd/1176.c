//https://judge.beecrowd.com/en/problems/view/1176

#include<stdio.h>

int main() {
    int T, i, N;
    long long fibo[61]; // Array to store Fibonacci numbers up to the 60th term

    // Precompute Fibonacci sequence
    fibo[0] = 0;
    fibo[1] = 1;
    for (i = 2; i <= 60; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

    // Read the number of test cases
    scanf("%d", &T);

    while (T--) {
        // Read the index N
        scanf("%d", &N);

        // Output the Nth Fibonacci number
        printf("Fib(%d) = %lld\n", N, fibo[N]);
    }

    return 0;
}