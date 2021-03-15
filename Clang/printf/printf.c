#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    // printf的返回值是打印字符的个数
    printf(" has %d digits\n", printf("%d", n));
    char output[50];
    // sprintf 将格式化字符串输出到一个目的字符串中，并返回int
    int ret = sprintf(output, "%d", n);
    printf("%d \n", ret);
    return 0;
}
