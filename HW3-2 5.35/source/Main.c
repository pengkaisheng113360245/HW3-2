#include <stdio.h>

unsigned long long fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    unsigned long long a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    printf("Enter n for Fibonacci series: ");
    scanf_s("%d", &n);
    printf("Fibonacci number at position %d: %llu\n", n, fibonacci(n));
    return 0;
}
