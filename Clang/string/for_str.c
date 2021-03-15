/*
 * 本程序展示如何优雅地遍历c语言中的字符数组
 * **/

#include <stdio.h>

int main() {
    char str[1000];
    scanf("%s", str);
    // 循环条件是关键，str[i]为'\0'的时候结束循环
    for (int i = 0; str[i]; i++) {
        printf("%c\n", str[i]);
    }
    return 0;
}

