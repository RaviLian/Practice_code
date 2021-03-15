/*
 *本程序可以将字符串类型的变量转换为数字类型
 * **/
#include <stdio.h>

int main() {
    char str_int[20] = "123456";
    char str_double[20] = "123.45";
    int num_int;
    double num_double;
    int  match_num = sscanf(str_int, "%d", &num_int);
    printf("match num = %d, the num_int = %d\n", match_num, num_int);

    sscanf(str_double, "%lf", &num_double);
    printf("%lf", num_double);
    return 0;
}
