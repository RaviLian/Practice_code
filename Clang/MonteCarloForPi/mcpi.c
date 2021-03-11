#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n = 0, m = 0;
    for (int i = 0; i < 1000000000; i ++) {
        // 0.0 - 1.0 之间的返回值
        double x = 1.0 * rand() / RAND_MAX;
        double y = 1.0 * rand() / RAND_MAX;
        // 记录(x, y)落在圆内的次数
        if (x * x + y * y <= 1.0) m += 1;
        // 总实验次数
        n += 1;
    }
    // 3.141588 运行了16秒32
    printf("%lf\n", 4.0 * m / n); 
}