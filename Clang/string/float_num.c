/*
 *本程序实现保留一个浮点数的任意位小数
 * */
#include <stdio.h>

int main() {
    double num;
    int n;
    char cat[100];
    scanf("%lf%d", &num, &n);
    // 注意format格数中两个%是为了输出一个%
    sprintf(cat, "%%.%dlf\n", n);
    // 针对printf的第一个参数进行拼接处理即可
    printf(cat, num);
    return 0;
}
