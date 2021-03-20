#include <stdio.h>

int fib_1(int n) {
    if ( n == 1 || n == 2) {
        return 1;
    }
    return fib_1(n-1) + fib_1(n-2);
}

int fib_2(int n) {
    int a = 1, b = 1;
    for (int i = 3; i <= n; i++) {
        a = b;
        b = a + b;
    }
    return a;
}

int main() {
    printf("%d\t%d", fib_1(6), fib_2(6));
    return 0;
}
