/*
 *本程序仅使用sprintf实现以下三个函数的功能：
 *  1.strlen
 *  2.strcpy
 *  3.strcat
 * **/

#include <stdio.h>

char str1[100], str2[100];
int main() {
    scanf("%s%s", str1, str2);
    printf("str1 = %s\t", str1);
    printf("str2 = %s\n", str2);
    // strlen(str1)
    int num = sprintf(str1, "%s", str1);
    printf("str1 = %d\n", num);
    // strcat(str1, str2) 参数可以是多个
    sprintf(str1, "%s%s",str1, str2);
    printf("str1 = %s\n", str1);
    // strcpy 将str2的内容以格式化字符串的形式写入str1
    sprintf(str1, "%s", str2);
    printf("str1 = %s\t str2 = %s\n", str1, str2);
    return 0;
}
