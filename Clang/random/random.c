#include <stdio.h>

/*
 *欧拉函数、欧拉定理、费马小定理、取余循环节
 *要学会数学！
 * */
int main() {
    int n = 5;
    for (int i = 1; i <= 100; i++) {
        printf("%2d ", n);
        if (i % 10 == 0) printf("\n");
        n = (n * 3) % 101;
    }
    return 0;
}
